#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

  //inizializzo i num casuali
  srand(time(0));

  cout << "cerca il max" << endl;
  int m = 0;

  for (int i = 0; i < 5; i++) {
    int n = rand()%100;
    cout << "numero della sequenza: " << n << endl;

    if (n > m) {
      m = n;
      cout << "m vale: " << m << endl;
    }
  }

  cout << "Il max vale: " << m << endl;

  return 0;
}
