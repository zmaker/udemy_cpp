#include <iostream>

using namespace std;

class Item {
  public:
    virtual void draw() = 0;
    /*
    virtual void draw() {
      cout << "x" << endl;
    }
    */
};

class Punto : public Item {
public:
  void draw() override {
    cout << "." << endl;
  }
};

class Linea : public Item {
public:
  void draw() override{
    cout << "---" << endl;
  }
};

class Tratteggio : public Item {
public:
  void draw() override{
    cout << "- - -" << endl;
  }
};

int main() {
  cout << "Virtual Points" << endl;

  Punto p;
  Linea l;
  Tratteggio t;

  Item *pp = &p;
  Item *pl = &l;
  Item *pt = &t;

  pp->draw();
  pl->draw();
  pt->draw();

  return 0;
}
