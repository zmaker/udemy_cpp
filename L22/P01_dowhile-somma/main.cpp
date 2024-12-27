#include <iostream>

using namespace std;

int main() {
  cout << "Somma - while - (0 per finire)" << endl;

  int somma = 0;
  int n = 0;

  do {
    cout << "Numero: ";
    cin >> n;
    somma += n;
  } while (n != 0);

  cout << "somma=" << somma << endl;

  return 0;
}
