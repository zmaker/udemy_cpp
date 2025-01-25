#include <iostream>

using namespace std;

class Mouse {
  public:
    int x,y;
    Mouse() : x(0), y(0){};
    Mouse(int xm, int ym) : x(xm), y(ym){};
    void prt(){
      cout << "M: " << x << ", " << y << endl;
    }
};

int main() {
  cout << "OOP e puntatori" << endl;

  Mouse m;
  m.prt();

  Mouse *pm;
  pm = &m;

  pm->x = 10;
  pm->y = 12;
  pm->prt();

  // REFERENCE
  Mouse &mr = m;
  mr.x = 89;
  mr.y = 101;
  mr.prt();

  //Allocazione dinamica
  Mouse *m1 = new Mouse(23,34);
  m1->prt();
  delete m1;



  return 0;
}
