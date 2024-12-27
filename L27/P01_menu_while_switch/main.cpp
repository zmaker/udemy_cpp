#include <iostream>

using namespace std;

int main() {
  cout << "Menu" << endl;

  bool LOOP = true;
  int ans = 0;

  do {
    cout << "0 - quit" << endl;
    cout << "1 - file" << endl;
    cout << "2 - edit" << endl;
    cout << "3 - help" << endl;
    cout << "cmd (0,1,2,3)? " << endl;
    cin >> ans;

    switch(ans){
      case 0:
        cout << "quit" << endl;
        LOOP = false;
        break;
      case 1:
        cout << "leggo il file" << endl;
        break;
      case 2:
        cout << "modifico il file" << endl;
        break;
      case 3:
        cout << "help in linea" << endl;
        break;
      default:
        cout << "???" << endl;
    }

  } while (LOOP);

  return 0;
}
