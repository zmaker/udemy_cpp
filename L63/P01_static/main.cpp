#include <iostream>

using namespace std;

class Contatore {
public:
  static int count;
  int id;
  Contatore(){
    id = count++;
  }
  static void prtc() {
    cout << "c: " << count << endl;
  }
};

int Contatore::count = 0;

int main() {
  cout << "Campi statici" << endl;

  Contatore::prtc();

  Contatore c1;
  Contatore c2;
  Contatore c3;

  cout << "c1: " << c1.count << endl;
  cout << "c2: " << c2.count << endl;
  cout << "c3: " << c3.count << endl << endl;

  cout << "c1: " << c1.id << endl;
  cout << "c2: " << c2.id << endl;
  cout << "c3: " << c3.id << endl;

  c1.prtc();
  Contatore::prtc();

  return 0;
}
