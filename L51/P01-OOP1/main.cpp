#include <iostream>
#include <cmath>

using namespace std;

class Rettangolo {
  public:
    int x,y;
    int w,h;

    int getArea(){
      area = w*h;
      return area;
    }

  private:
    int area;

};

int main() {
  cout << "OOP 1" << endl;

  Rettangolo r1;
  r1.h = 10;
  r1.w = 20;
  r1.x = 0;
  r1.y = 0;

  cout << "r1: " << r1.x << ", " << r1.y << " " << r1.w << "x" << r1.w << endl;

  Rettangolo r2;
  r2.h = 20;
  r2.w = 30;
  r2.x = 100;
  r2.y = 23;
  cout << "r2: " << r2.x << ", " << r2.y << " " << r2.w << "x" << r2.w << endl;

  cout << "r1 area: " << r1.getArea() << endl;

  return 0;
}
