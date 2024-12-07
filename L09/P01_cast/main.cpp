#include <iostream>

using namespace std;

int main() {
  cout << "Type cast" << endl;

  int x;
  double y;

  cout << "size x: " << sizeof(x) << endl;
  cout << "size y: " << sizeof(y) << endl;

  y = 5.56;
  cout << "y: " << y << endl;
  x = y;
  cout << "x: " << x << endl;

  short s = 10;
  x = s;
  cout << "s: " << s << endl;
  cout << "x: " << x << endl;

  x = 70000;
  s = x;
  cout << "s: " << s << endl;

  int n = 10;
  int d = 3;
  float q = n / d;
  cout << "1. q: " << q << endl;

  q = (float)n / (float)d;
  cout << "2. q: " << q << endl;

  q = (float)n / d;
  cout << "3. q: " << q << endl;

  q = static_cast<float>(n) / d;
  cout << "4. q: " << q << endl;

  char c = 'a';
  cout << "char: " << c << endl;
  cout << "char: " << (int)c << endl;
  c = 100;
  cout << "char: " << c << endl;
  cout << "char: " << (int)c << endl;

  return 0;
}
