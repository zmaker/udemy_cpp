#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct Persona {
  string nome;
  string cognome;
  int eta;
  float altezza;
  char addr[20];
};

void printp(Persona &p){
  cout << "Persona: ";
  cout << p.nome << " " << p.cognome << " eta: " << p.eta << endl;
  cout << p.altezza << endl;
  cout << p.addr << endl;
}

int main() {
  cout << "Strutture" << endl;

  Persona p1;
  p1.nome = "Mario";
  p1.cognome = "Rossi";
  p1.eta = 35;
  p1.altezza = 1.75;
  strcpy(p1.addr, "Via roma, 12");

  cout << p1.nome << " " << p1.cognome << " eta: " << p1.eta << endl;
  cout << p1.addr << endl;

  Persona p2 = {"Luigi", "Bianchi", 40, 1.56, "p.za Italia, 32"};

  printp(p2);

  return 0;
}
