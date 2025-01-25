#include <iostream>

using namespace std;

class Punto {
  public:
    int x,y;
    Punto(): x(0), y(0), color(0){};
    void print(){
      cout << "P: " << x << "," << y << " - C:" << color << endl;
    };
  private:
    int color;

  friend void modificaPunti(int);
};

void modificaPunti(int c){
  Punto p;
  p.color = c;
  p.print();
}

int main() {
  cout << "Friend function" << endl;

  Punto p;
  p.x = 10;
  p.y = 20;
  p.print();

  modificaPunti(34);

  return 0;
}
