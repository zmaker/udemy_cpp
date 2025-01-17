#include <iostream>

using namespace std;

int fatt(int n){
  if (n == 1) {
    //stop delle chiamate
    return 1;
  } else {
    return n * fatt(n-1);
  }
}

int main()
{
    cout << "Ricorsione" << endl;
    //fattoriale
    int n = fatt(1);
    cout << "f(1) = " << n << endl;
    cout << "f(2) = " << fatt(2) << endl;
    cout << "f(3) = " << fatt(3) << endl;
    cout << "f(5) = " << fatt(5) << endl;

    return 0;
}
