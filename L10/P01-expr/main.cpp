#include <iostream>

using namespace std;

int main() {
  cout << "Espressioni" << endl;

  bool b = true;
  cout << "b: " << b << endl;
  b = false;
  cout << "b: " << b << endl;

  /*
  > < == != >= <=
  */

  bool expr = 10 > 2;
  cout << "1. expr: " << expr << endl;
  cout << "2. expr: " << (10 > 2) << endl;
  cout << "3. expr: " << (10 < 2) << endl;

  int n = 10;
  cout << "4. expr: " << (n > 2) << endl;
  cout << "5. expr: " << (n < 2) << endl;

  int temp = 18;
  cout << "6. expr: " << (temp == 18) << endl;
  cout << "7. expr: " << (temp != 18) << endl;

  //       5      9
  // ------|      |-------
  int x = 3;
  cout << "8. expr (or): " << ((x < 5) || (x > 9)) << endl;
  x = 10;
  cout << "9. expr (or): " << ((x < 5) || (x > 9)) << endl;
  x = 7;
  cout << "10. expr (or): " << ((x < 5) || (x > 9)) << endl << endl;

  //       5      9
  //       |------|
  x = 3;
  cout << "11. expr (and): " << ((x >= 5) && (x <= 9)) << endl;
  x = 10;
  cout << "12. expr (and): " << ((x >= 5) && (x <= 9)) << endl;
  x = 7;
  cout << "13. expr (and): " << ((x >= 5) && (x <= 9)) << endl;


  return 0;
}
