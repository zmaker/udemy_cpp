#include <iostream>

using namespace std;

int main(){
  cout << "clear - flusso in errore" << endl;

  int x, y, z;
  cout << "x: ";
  cin >> x;
  cin.clear();
  cin.ignore(80, '\n');

  cout << "y: ";
  cin >> y;
  cin.clear();
  cin.ignore(80, '\n');

  cout << "z: ";
  cin >> z;
  cin.clear();
  cin.ignore(80, '\n');

  cout << x << "," << y << "," << z << endl;

  return 0;
}
