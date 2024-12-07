#include <iostream>

using namespace std;

int main() {
  cout << "Cin-stringhe" << endl;

  char nome[25];
  cout << "inserire il nome: ";
  cin.getline(nome, 25);

  char cognome[25];
  cout << "inserire il cognome: ";
  cin.getline(cognome, 25);

  cout << endl;
  cout << "Ciao, " << nome << endl;
  cout << "c: " << cognome << endl;


  return 0;
}
