#include "./card.hpp"
#include <exception>
#include <iostream>
#include <vector>
using namespace std;

class SubjectCards {
private:
  vector<Card> myCards;
  int cardCounter;

public:
  SubjectCards() { this->cardCounter = 0; }

  void add_card(Card newCard) {
    if (cardCounter < 10) {
      myCards.emplace_back(newCard);
      cout << "New card assigned" << endl;
      ++cardCounter;
    } else {
      cout << "No card space :(" << endl;
    }
  }

  void delete_card() {
    if (myCards.size() > 0) {
      int card_index;
      cout << "Type the card position: " << endl;
      try {
        cin >> card_index;
        myCards.erase(myCards.begin() + (card_index - 1));
        --cardCounter;
        cout << "Card has been deleted" << endl;

      } catch (exception e) {
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
        myCards[i].say_question();
      }
    } else {
      cout << "There are no cards" << endl;
    }
  }
};
