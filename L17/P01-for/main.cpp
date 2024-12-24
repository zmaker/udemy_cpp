#include <iostream>

using namespace std;

int main() {
  cout << "For" << endl;

  for ( int i = 0 ; i < 10 ; i++ ) {
    cout << i << " ";
  }
  cout << endl;

  int j;
  for (j = 1; j <= 5; j++) cout << j << " ";
  cout << endl;

  //conteggio all'indietro
  for (int i = 9; i >= 0; i--) {
    cout << i << " ";
  }
  cout << endl;
  //2o metodo
  for ( int i = 0 ; i < 10 ; i++ ) {
    cout << (9-i) << " ";
  }
  cout << endl;

  //passo 2
  for (int i = 0; i < 10; i = i + 2) {
    cout << i << " ";
  }
  cout << endl;

  //pari e dispari
  for (int i = 0; i < 10; i++) {
    int r = i%2;
    cout << i << " r: " << r;
    if (r == 0) {
      cout << " P" << endl;
    } else {
      cout << " D" << endl;
    }
  }
  cout << endl;

  for (int i = 0; i < 10; i++) {
    int r = i%2;
    cout << i << " r: " << r << " " << ( r==0 ? "P" : "D" ) << endl;
  }

  return 0;
}
