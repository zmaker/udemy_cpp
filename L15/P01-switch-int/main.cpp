#include <iostream>

using namespace std;

int main() {
  cout << "Switch " << endl;

  cout << "centro di controllo" << endl;
  cout << "-------------------" << endl;
  cout << "0 - quit" << endl;
  cout << "1 - copia file" << endl;
  cout << "2 - crea cartella" << endl;
  cout << "3 - help" << endl << endl;

  int cmd;
  cout << ">:";
  cin >> cmd;

  switch (cmd) {
  case 0:
    cout << "bye" << endl;
    return 0;
    break;
  case 1:
    cout << "copia ok" << endl;
    break;
  case 2:
    cout << "Cartella ok" << endl;
    break;
  case 3:
    cout << "0 - quit" << endl;
    cout << "1 - copia file" << endl;
    cout << "2 - crea cartella" << endl;
    cout << "3 - help" << endl << endl;
    break;
  case 4:
  case 5:
    cout << "4 o 5" << endl;
    break;
  default:
    cout << "?" << endl;
  }

  return 0;
}
