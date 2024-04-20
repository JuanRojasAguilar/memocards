#include <iostream>
#include "../include/subject_cards.hpp"

using namespace std;

void printMenu();
char choise();
void study_cards(SubjectCards deck);
void add_card_to_deck(SubjectCards deck);

int main() {
  SubjectCards testDeck;
  char res;

  do {
  printMenu();
  
  res = choise();

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

  } while (res != 3);
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
  card.set_question();
  cin.ignore();
  card.set_description();
  deck.add_card(card);
  cout << "Se ha añadido tu carta" << endl;
}

