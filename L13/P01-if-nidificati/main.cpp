#include <iostream>

using namespace std;

int main() {
  cout << "Monitoraggio Pianta" << endl;
  int temp = 0;
  int hum = 0;

  cout << "temp (0-50): ";
  cin >> temp;
  cout << "hum (0-100): ";
  cin >> hum;

  if (temp > 25) {
    cout << "caldo" << endl;
    if (hum < 20) {
      cout << "IRRIGAZIONE: ON" << endl;
    }

  } else {
    cout << "temp ok" << endl;
    if (hum < 10) {
      cout << "IRRIGAZIONE: ON" << endl;
    }
  }

  return 0;
}
