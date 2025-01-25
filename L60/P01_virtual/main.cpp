#include <iostream>

using namespace std;

class Base {
  public:
    virtual void show() {
      cout << "Classe Base" << endl;
    }
};

class Point : public Base {
  public:
    void show() override {
      cout << "Classe Point" << endl;
    }
};

int main() {
  cout << "Virtual" << endl;

  Base *ptr;
  Point p;
  ptr = &p;

  ptr->show();


  return 0;
}
