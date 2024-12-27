#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  cout << "Indovina il numero" << endl;

  //genero un numero casuale
  srand(time(0));
  int segreto = (rand()%100) + 1;
  cout << segreto << endl;

  bool indovinato = false;
  int n = 0;

  while (!indovinato) {
    cout << "numero: ";
    cin >> n;

    if (n == segreto) {
      cout << "Indovinato!" << endl;
      indovinato = true;
    } else {
      cout << "Non hai indovinato, ritenta" << endl;
    }
  }

  return 0;
}
