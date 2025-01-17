#include <iostream>
#include <string>

using namespace std;

struct Studente {
  string nome;
  string cognome;
  int cod;
};

int main() {
  cout << "Array di strutture" << endl;

  Studente slist[3];
  for (int i = 0; i < 3; i++) {
    cout << "nome: ";
    cin >> slist[i].nome;
    cout << "cognome: ";
    cin >> slist[i].cognome;
    cout << "codice: ";
    cin >> slist[i].cod;
  }

  for (int i = 0; i < 3; i++) {
    cout << slist[i].cod << " - " << slist[i].nome << " " << slist[i].cognome << endl;
  }


  return 0;
}
