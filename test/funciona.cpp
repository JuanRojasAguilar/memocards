#include <iostream>
using namespace std;

class PruebaCard {
private:
  string description;
public:
  PruebaCard(string text) {
    this->description = text;
  }
  void get_description() {
    cout << description << endl;
  }
};

int main() {
  PruebaCard testeo = PruebaCard("Hola mundo"); 
  testeo.get_description();

  return 0;
}

