#include <iostream>

using namespace std;

int main() {
  cout << "Switch " << endl;

  cout << "centro di controllo" << endl;
  cout << "-------------------" << endl;
  cout << "q - quit" << endl;
  cout << "c - copia file" << endl;
  cout << "f - crea cartella" << endl;
  cout << "h - help" << endl << endl;

  char cmd;
  cout << ">:";
  cin >> cmd;

  switch (cmd) {
  case 'q':
  case 'x':
    cout << "bye" << endl;
    return 0;
    break;

  case 'c':
    cout << "copia ok" << endl;
    break;

  case 'f':
    cout << "Cartella ok" << endl;
    break;

  case 'h':
    cout << "q - quit" << endl;
    cout << "c - copia file" << endl;
    cout << "f - crea cartella" << endl;
    cout << "h - help" << endl << endl;
    break;

  default:
    cout << "?" << endl;
  }

  return 0;
}
