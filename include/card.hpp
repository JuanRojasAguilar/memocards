#include <iostream>
using namespace std;

class Card {
private:
  string question;
  string description;

public:
  void get_question() {
    getline(cin, question);
    cout << question << endl;
  }

  void get_description() {
    getline(cin, description);
    cout << description << endl;
  }

  void say_question() { cout << question << endl; }

  void say_description() { cout << description << endl; }
};
