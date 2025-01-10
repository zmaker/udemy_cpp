#include <iostream>

using namespace std;

int inc() {
  int c = 0;
  c++;
  return c;
}

int inc2() {
  static int c = 0;
  c++;
  return c;
}

inline int quadrato(int x) {
  return x*x;
}

int g = 99;

void aum() {
  extern int g;
  g++;
}

void f1 (int a, int b = 10){
  cout << "f1=" << (a + b) << endl;
}

void f2 (int x, int y, int z=0);

int main() {
  cout << "Extra fun" << endl;

  cout << "1: " << inc() << endl;
  cout << "2: " << inc() << endl;
  cout << "3: " << inc() << endl << endl;

  cout << "4: " << inc2() << endl;
  cout << "5: " << inc2() << endl;
  cout << "6: " << inc2() << endl << endl;

  cout << "quadrato: " << quadrato(4) << endl << endl;

  cout << "g: " << g << endl;
  aum();
  cout << "g: " << g << endl;

  f1(1,2);
  f1(1);

  f2(10,20);
  f2(10,20,30);

  return 0;
}

void f2 (int x, int y, int z) {
  cout << "coord: " << x << ", " << y << ", " << z << ")" << endl;
}
