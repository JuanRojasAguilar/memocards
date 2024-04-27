#include <iostream>
#include "../include/subject_cards.hpp"

using namespace std;

void printMenu();
char choice();
void study_cards(SubjectCards& deck); // Pass by reference
void add_card_to_deck(SubjectCards& deck); // Pass by reference

int main() {
  SubjectCards testDeck;
  char res;

  do {
    printMenu();
    res = choice();

    switch (res) {
      case '1':
        study_cards(testDeck);
        break;
      case '2':
        add_card_to_deck(testDeck);
        break;
      case '3':
        cout << "See ya!" << endl;
        break;
      default:
        cout << "Invalid. Try again" << endl;
        break;
    }

  } while (res != '3');
  
  return 0;
}

void printMenu() {
  cout << "===============" << endl;
  cout << "+  MEMOCARDS  +" << endl;
  cout << "===============" << endl;

  cout << "1. Estudiar cartas \n2. Agregar carta. \n3. Salir.\n" << endl;
}

char choice() {
  char response;
  cin >> response;
  return response;
}

void study_cards(SubjectCards& deck) { // Pass by reference
  deck.show_random_cards();
}

void add_card_to_deck(SubjectCards& deck) { // Pass by reference
  Card card;
  card.set_question();
  card.set_answer();
  deck.add_card(card);
  cout << "Se ha añadido tu carta" << endl;
}
