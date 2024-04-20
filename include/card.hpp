#include <iostream>
using namespace std;

class Card {
private:
  string question;
  string description;
public:
  Card() : question(""), description("") {}; //Constructor

  void set_question() {
    cout << "Please enter the question: ";
    getline(cin, question);
    cout << "Question: " << question << endl;
  }

  void set_description() {
    cout << "Please enter the question: ";
    getline(cin, question);
    cout << "Question: " << question << endl;
  }

  void say_question() { cout << question << endl; }

  void say_description() { cout << description << endl; }
};
