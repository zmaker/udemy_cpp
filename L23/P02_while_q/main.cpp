#include <iostream>

using namespace std;

int main() {
  cout << "While Q" << endl;

  for (int i = 0; i < 10; i++) {
    cout << i << " ";
  }
  cout << endl;

  char ch = '\0';
  cout << "premi q per terminare" << endl;
  while ( (ch = cin.get()) != 'q' );
  cout << "END" << endl;

  return 0;
}
