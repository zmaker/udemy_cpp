#include <iostream>

using namespace std;

struct Punto {
  int x;
  int y;
  int z;
};

Punto* crea(int x, int y, int z) {
  Punto *p = new Punto;
  p->x = x;
  p->y = y;
  p->z = z;
  return p;
}

void kill(Punto *p){
  delete p;
  cout << "free mem!" << endl;
}

void prt(Punto *p) {
  cout << "P:(" << p->x << ", " << p->y << ", "<< p->z << ")" << endl;
}

void sposta(Punto *p){
  p->x++;
  p->y++;
}

int main() {
    cout << "Struct dinamica" << endl;

    Punto *p1 = crea(10,10,0);

    prt(p1);
    sposta(p1);
    prt(p1);

    kill(p1);

    return 0;
}
