#include <iostream>

using namespace std;

int main() {
  cout << "tre numeri" << endl;

  int a,b,c;
  cout << "a: ";
  cin >> a;
  cout << "b: ";
  cin >> b;
  cout << "c: ";
  cin >> c;

  if (a > b) {
    // tengo a (butto b)
    if (a > c) {
      cout << "a: " << a << endl;
    } else {
      cout << "c: " << c << endl;
    }

  } else {
    // tengo b (butto a)
    if (b > c) {
      cout << "b: " << b << endl;
    } else {
      cout << "c: " << c << endl;
    }
  }

  return 0;
}
