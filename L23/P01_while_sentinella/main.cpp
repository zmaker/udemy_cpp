#include <iostream>

using namespace std;

int main(){
  cout << "While sentinella" << endl;

  char ch = '\0';

  while (ch != 'q') {

    cout << "q per finire: ";
    ch = cin.get();
    cout << "ch: " << ch << endl;
  }

  cout << "END" << endl;

  return 0;
}
