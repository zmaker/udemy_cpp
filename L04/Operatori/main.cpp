#include <iostream>

using namespace std;

int main() {
  cout << "Operatori" << endl;

  int n = 10;
  int m = 20;

  int somma = n + m;
  cout << "n + m: " << somma << endl;
  int diff = n - m;
  cout << "n - m: " << diff << endl;
  int prod = n * m;
  cout << "n * m: " << prod << endl;
  int quot = n / m;
  cout << "n / m: " << quot << endl;
  cout << "n % 3: " << (n%3) << endl << endl;

  cout << "m: " << m << endl;
  m = m + 10;
  cout << "m: " << m << endl;
  m += 10;
  cout << "m: " << m << endl;
  m *= 2;
  cout << "m: " << m << endl << endl;

  n = 0;
  cout << "n: " << n << endl;
  n++;
  cout << "n: " << n << endl;
  n++;
  cout << "n: " << n << endl << endl;

  n = 0;
  cout << "n: " << n << endl;
  cout << "n: " << n++ << endl;
  cout << "n: " << n << endl;
  cout << "n: " << ++n << endl;
  cout << "n: " << n << endl << endl;

  n = 10;
  cout << "n: " << n << endl;
  cout << "n: " << n-- << endl;
  cout << "n: " << n << endl;
  cout << "n: " << --n << endl;
  cout << "n: " << n << endl;

  return 0;
}
