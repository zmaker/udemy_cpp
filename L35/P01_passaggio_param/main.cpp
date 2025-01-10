#include <iostream>

using namespace std;

void inc(int x){
  x++;
}

void incr(int &x){
  x++;
}

void incp(int *x){
  (*x)++;
}


int main() {
  cout << "Parametri" << endl;

  int x = 0;
  cout << "x: " << x << endl;
  inc(x);
  cout << "x: " << x << endl;

  incr(x);
  cout << "x: " << x << endl;

  incp(&x);
  cout << "x: " << x << endl;

  return 0;
}
