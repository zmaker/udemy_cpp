#include <iostream>

using namespace std;

class Punto{
  public:
    int x,y;
    Punto *next;
    Punto(): x(0), y(0) {}
    Punto(int xp, int yp): x(xp), y(yp) {}
};

int main() {

  Punto a(10,10);
  Punto b(10,30);
  Punto c(0,5);

  a.next = &b;
  b.next = &c;

  cout << "a: " << a.x << ", " << a.y << endl;
  cout << "b: " << b.x << ", " << b.y << endl;
  cout << "b: " << a.next->x << ", " << a.next->y << endl;

  return 0;
}
