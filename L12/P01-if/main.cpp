#include <iostream>

using namespace std;

int main() {
  cout << "if semplice" << endl;

  int temp;
  cout << "Temperatura: ";
  cin >> temp;

  int hum;
  cout << "Umidita: ";
  cin >> hum;
  cout << endl;

  if (temp > 20) {
    //codice da eseguire
    cout << "Fa caldo" << endl;
  }

  if (hum > 80) {
    //eseguito se expre � vera
    cout << "Molto umido" << endl;
  } else {
    //eseguito se expr � false
    cout << "umid. accettabile" << endl;
  }


  return 0;
}
