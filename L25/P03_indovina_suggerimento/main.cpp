#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>

using namespace std;

int main() {
  setlocale(LC_ALL, "");
  cout << "Indovina il numero" << endl;

  //genero un numero casuale
  srand(time(0));
  int segreto = (rand()%100) + 1;
  cout << segreto << endl;

  bool indovinato = false;
  int n = 0;
  int tentativi = 0;

  while ((!indovinato) && (tentativi < 3)) {
    cout << "numero: ";
    cin >> n;
    tentativi++;
    cout << "tentativi: " << tentativi << endl;

    if (n == segreto) {
      cout << "Indovinato!" << endl;
      indovinato = true;
    } else {
      cout << "Non hai indovinato, ritenta" << endl;
      if (n > segreto){
        cout << "il numero segreto è più basso" << endl;
      } else {
        cout << "il numero segreto è più alto" << endl;
      }
    }
  }

  return 0;
}
