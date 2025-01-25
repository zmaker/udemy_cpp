#include <iostream>
#include <string>

using namespace std;

class Forma {
public:
  int lato;
  Forma() : lato(0) {}
  Forma(int l) : lato(l) {}
  void getLato() {
    cout << "lato: " << lato << endl;
  }
  void test(){
    cout << "t forma" << endl;
  }
};

class Colore {
public:
  string colore;
  Colore() : colore("black") {}
  Colore(string c) : colore(c) {}
  void getColore() {
    cout << "colore: " << colore << endl;
  }
  void test(){
    cout << "t colore" << endl;
  }
};

class Quad : public Forma, public Colore {
public:
    Quad() : Forma(0), Colore("bianco") {}
    Quad(int l, string c) : Forma(l), Colore(c) {}
    void prt() {
      getLato();
      getColore();
    }
};

int main() {
  cout << "Multi Ereditarietà" << endl;

  Quad q(10, "rosso");
  q.prt();

  q.Colore::test();
  q.Forma::test();

  return 0;
}
