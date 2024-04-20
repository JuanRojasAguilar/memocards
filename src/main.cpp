#include <iostream>
#include "../include/subject_cards.hpp"

using namespace std;

void printMenu();
char choise();
void study_cards(SubjectCards deck);
void add_card_to_deck(SubjectCards deck);

int main() {
  SubjectCards testDeck;

  printMenu();
  switch (choise()) {
    case '1':
      study_cards(testDeck);
      break;
    case '2':
      add_card_to_deck(testDeck);
      break;
  }
  main();
  return 0;
}

void printMenu() {
  cout << "===============" << endl;
  cout << "+  MEMOCARDS  +" << endl;
  cout << "===============" << endl;

  cout << "1. Estudiar cartas \n2. Agregar carta. \n3. Salir.\n" << endl;
}

char choise() {
  char response;
  cin >> response;
  return response;
}

void study_cards(SubjectCards deck) {
  deck.show_cards();
}

void add_card_to_deck(SubjectCards deck) {
  Card card;
  cout << "Add the card question" << endl;
  card.get_question();
  cout << "Add the card description" << endl;
  card.get_description();
  deck.addCard(card);
  cout << "Se ha añadido tu carta" << endl;
}

