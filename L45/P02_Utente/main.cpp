#include <iostream>
#include <string>

using namespace std;

struct Data {
  int giorno;
  int mese;
  int anno;
};

struct Utente {
  string login;
  string password;
  Data data_reg;
};

struct Libro {
  string titolo;
  string autore;
  int anno;
  float prezzo;

  void stampa() {
    cout << titolo << " " << autore << endl;
  }
};

int main()
{
    cout << "Struct 2" << endl;

    Utente u1;
    u1.login = "admin";
    u1.password = "123456";
    u1.data_reg.anno = 2022;
    u1.data_reg.mese = 2;
    u1.data_reg.giorno = 14;

    cout << u1.login << " " << u1.data_reg.anno << endl;

    Utente u2 = {"marior", "000000", 10, 3, 2023};
    cout << u2.login << endl;
    cout << u2.password << endl;
    cout << u2.data_reg.anno << endl;
    cout << u2.data_reg.mese << endl;
    cout << u2.data_reg.giorno << endl << endl;

    Libro l;
    l.titolo = "Promessi Sposi";
    l.autore = "Manzoni A.";
    l.anno = 1850;
    l.prezzo = 15.35;
    l.stampa();

    return 0;
}
