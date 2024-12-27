#include <iostream>

using namespace std;

int main() {
  cout << "Array 2D" << endl;

  int tabella[4][3]; //[righe][colonne]
  int a[3][3][3];

  int matrice[4][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9},
    {10,11,12}
  };

  //inizializzo
  for (int r = 0; r < 4; r++){
    for (int c = 0; c < 3; c++){
      tabella[r][c] = 0;
    }
  }

  tabella[0][0] = 1;
  tabella[1][1] = 2;
  tabella[2][2] = 3;

  for (int r = 0; r < 4; r++){
    for (int c = 0; c < 3; c++){
      cout << tabella[r][c] << "\t";
    }
    cout << endl;
  }

  cout << sizeof(tabella) << endl;

  return 0;
}
