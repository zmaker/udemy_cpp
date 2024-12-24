#include <iostream>

using namespace std;

int main() {
  cout << "DoWhile" << endl;

  /*
  do {

  } while (expr);
  */

  int somma = 0;
  int n = 0;

  do {
    cout << "dammi un num (0 per finire): ";
    cin >> n;
    somma += n;
    cout << "somma parz: " << somma << endl;
  } while (n != 0);

  cout << "somma: " << somma << endl;

  return 0;
}
