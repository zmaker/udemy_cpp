#include <iostream>
#include <string>
#include <vector>

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


int main()
{
    cout << "Vector di oggetti" << endl;

    vector<Persona> persone;

    for (int i = 0; i < 5; i++){
      Persona p;
      string name;
      cout << "nome: ";
      cin >> name;
      p.setName(name);
      persone.push_back(p);
    }

    for (Persona p : persone){
      p.prt();
    }

    return 0;
}
