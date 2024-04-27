#include "./card.hpp"
#include <cstdlib>
#include <exception>
#include <iostream>
#include <vector>
using namespace std;

class SubjectCards {
private:
  vector<Card> myCards;
  int cardCounter;

public:
  SubjectCards() : cardCounter(0) {}

  void add_card(Card newCard) {
    if (cardCounter < 10) {
      myCards.push_back(newCard); // Use push_back to add the new card
      cout << "New card assigned" << endl;
      ++cardCounter;
    } else {
      cout << "No card space :(" << endl;
    }
  }

  void delete_card() {
    if (!myCards.empty()) { // Check if myCards is not empty
      int card_index;
      cout << "Type the card position: " << endl;
      try {
        cin >> card_index;
        if (card_index >= 1 && card_index <= myCards.size()) {
          myCards.erase(myCards.begin() + (card_index - 1));
          --cardCounter;
          cout << "Card has been deleted" << endl;
        } else {
          cout << "Invalid card position" << endl;
        }
      } catch (exception& e) { // Catch by reference to the exception
        cout << "Invalid input" << endl;
      }
    } else {
      cout << "There's no cards" << endl;
    }
  }

  void show_cards() {
    if (!myCards.empty()) {
      for (size_t i = 0; i < myCards.size(); ++i) {
        cout << (i + 1) << ". " << endl;
        cout << "Question: ";
        myCards[i].say_question();
        cout << "Answer: ";
        myCards[i].say_answer();
      }
    } else {
      cout << "There are no cards" << endl;
    }
  }

  void show_random_cards() {
      Card pickedCard = myCards[rand() % myCards.size()];
      pickedCard.say_question();
      cin.get();
      pickedCard.say_answer();
  }
};
