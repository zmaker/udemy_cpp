#include <iostream>
#include <string>

using namespace std;

class Persona {
  public:
    Persona(){
      nome = "";
    }
    void setName(string n) {
      nome = n;
    }
    void prt(){
      cout << "P: " << nome << endl;
    }
  private:
    string nome;
};

int main() {
  cout << "Array di Oggetti" << endl;

  Persona lista[5];
  for (int i = 0; i < 5; i++){
    string name;
    cout << "nome: ";
    cin >> name;
    lista[i].setName(name);
  }

  for (int i = 0; i < 5; i++){
    lista[i].prt();
  }

  return 0;
}
