#include <iostream>
#include <stdlib.h>
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
    system("clear");
    cout << "==========================" << endl;
    cout << "Question: " << question << endl;
    cout << "==========================" << endl;
  }

  void set_answer() {
    cout << "Please enter the description: ";
    getline(cin >> ws, answer);
    system("clear");
    cout << "==========================" << endl;
    cout << "Answer: " << answer << endl;
    cout << "==========================" << endl;
  }

  void say_question() { 
    cout << "~~QUESTION~~" << endl;
    cout << "==========================" << endl;
    cout << question << endl;
    cout << "--------------------------" << endl;
  }

  void say_answer() { 
    cout << "--------------------------" << endl;
    cout << answer << endl;
    cout << "==========================" << endl;
  }
};
