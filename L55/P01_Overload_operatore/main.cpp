#include <iostream>

using namespace std;

class Punto {
  public:
    int x, y;
    Punto();
    Punto(int, int);
    Punto operator+(Punto);
};

Punto::Punto(){
  x = 0;
  y = 0;
}

Punto::Punto(int x, int y){
  this->x = x;
  this->y = y;
}

Punto Punto::operator+(Punto p){
  Punto s;
  s.x = p.x + this->x;
  s.y = p.y + y;
  return s;
}

int main()
{
  cout << "Overloading operatore" << endl;

  Punto a(10,10);
  Punto b(20,30);

  Punto c;
  c = a + b;
  // c = a.somma(b);
  // c = a.operator+(b);
  cout << "c: " << c.x << ", " << c.y << endl;

  return 0;
}
