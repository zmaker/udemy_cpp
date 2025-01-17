#include <iostream>

using namespace std;

struct Punto {
  int x;
  int y;
  int z;
};

void stampa(const Punto &p){
  cout << "P: (" << p.x << ", " << p.y << ", "<< p.z << ")" << endl;
}

void muovi(Punto &p){
  p.x++;
  p.y++;
}

void salta(Punto *p){
  //(*p).z += 10;
  p->z += 15;
}

int main()
{
    cout << "Op freccia" << endl;

    Punto a;
    a.x = 10;
    a.y = 20;
    a.z = 0;

    stampa(a);
    muovi(a);
    stampa(a);
    salta(&a);
    stampa(a);

    return 0;
}
