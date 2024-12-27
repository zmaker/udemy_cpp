#include <iostream>

using namespace std;

int main() {
  cout << "Array" << endl;

  int voti[10];
  voti[0] = 18;
  voti[1] = 20;
  voti[2] = 30;

  cout << "voto: " << voti[0] << endl;
  cout << "voto: " << voti[1] << endl;
  cout << "voto: " << voti[2] << endl;

  int temp[5] = {1,2,3,4,5};
  cout << temp[0] << endl;
  cout << temp[1] << endl;
  cout << temp[2] << endl;
  cout << temp[3] << endl;
  cout << temp[4] << endl;

  cout << sizeof(temp) << endl;
  cout << sizeof(temp)/sizeof(int) << endl;

  return 0;
}
