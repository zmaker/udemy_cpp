#include <iostream>

using namespace std;

int main() {
  cout << "break-continue" << endl;

  for (int i = 0; i < 10; i++) {
    cout << i << " ";
  }
  cout << endl;
  cout << "for - break" << endl;
  for (int i = 0; i < 10; i++) {
    if (i == 5) break;
    cout << i << " ";
  }
  cout << endl;
  cout << "for - continue" << endl;
  for (int i = 0; i < 10; i++) {
    if (i == 5) continue;
    cout << i << " ";
  }
  cout << endl << endl;
  cout << "while" << endl;
  int i = 0;
  while (i < 10){
    cout << i << " ";
    i++;
  }
  cout << endl;
  cout << "while-break" << endl;
  i = 0;
  while (i < 10){
    if (i == 5) break;
    cout << i << " ";
    i++;
  }
  cout << endl;
  cout << "while-continue" << endl;
  i = 0;
  while (i < 10){
    i++;
    if (i == 5) continue;
    cout << i << " ";
  }
  cout << endl << endl;
  cout << "goto" << endl;
  int x = 0;
  loop:
  cout << x << " ";
  x++;
  if (x < 10) goto loop;


  return 0;
}
