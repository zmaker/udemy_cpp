#include <iostream>

using namespace std;

int main() {
  cout << "While cin" << endl;

  int somma = 0;
  int n = 0;

  while (cin) {
    cout << "numero: ";
    cin >> n;
    somma += n;
    cout << "parz: " << somma << endl;
  }
  cout << "somma: " << somma << endl;

  return 0;
}
