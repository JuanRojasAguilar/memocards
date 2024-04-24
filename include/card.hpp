#include <iostream>
using namespace std;

class Card {
private:
  string question;
  string answer;
public:
  Card() : question(""), answer("") {}; //Constructor

  void set_question() {
    cout << "Please enter the question: ";
    getline(cin >> ws, question);
    cout << "Question: " << question << endl;
  }

  void set_answer() {
    cout << "Please enter the description: ";
    getline(cin >> ws, answer);
    cout << "Description: " << answer << endl;
  }

  void say_question() { cout << question << endl; }

  void say_answer() { cout << answer << endl; }
};
