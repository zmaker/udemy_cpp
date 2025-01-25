#include <iostream>

using namespace std;

/*
https://www.andreaminini.com/informatica/il-carattere-tilde-sul-pc-windows-linux-e-mac
*/

class Rettangolo {
  public:
    int x,y;
    int w,h;

    Rettangolo();
    Rettangolo(int larg, int alt);
    ~Rettangolo();
    int getArea();

  private:
    int area;

};

Rettangolo::Rettangolo(){
  x = 0;
  y = 0;
  w = 0;
  h = 0;
  area = 0;
}

Rettangolo::Rettangolo(int larg, int alt){
  x = 0;
  y = 0;
  w = larg;
  h = alt;
  area = w*h;
}

Rettangolo::~Rettangolo(){
  cout << "distrutto!" << endl;
}

int Rettangolo::getArea(){
  area = w*h;
  return area;
}

int main() {
  cout << "Costruttori" << endl;

  Rettangolo r1;
  cout << r1.x << endl;

  Rettangolo r2(10, 20);
  cout << "area: " << r2.getArea() << endl;
  return 0;
}
