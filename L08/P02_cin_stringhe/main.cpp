#include <iostream>

using namespace std;

int main() {
  cout << "Cin-stringhe" << endl;

  string nome;
  cout << "inserire il nome: ";
  cin >> nome;

  string cognome;
  cout << "inserire il cognome: ";
  cin >> cognome;

  cout << endl;
  cout << "Ciao, " << nome << endl;
  cout << "c: " << cognome << endl;


  return 0;
}
