#include <iostream>

using namespace std;

int main() {
  cout << "cerca il max" << endl;

  int m = 0;

  for (int i = 0; i < 5; i++) {
    cout << "numero della sequenza: ";
    int n = 0;
    cin >> n;

    if (n > m) {
      m = n;
      cout << "m vale: " << m << endl;
    }
  }

  cout << "Il max vale: " << m << endl;

  return 0;
}
