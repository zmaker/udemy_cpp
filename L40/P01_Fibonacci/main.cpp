#include <iostream>

using namespace std;

int fib(int n){
  if (n == 0) {
    return 0;
  } else if (n == 1){
    return 1;
  } else {
    return fib(n-1) + fib(n-2);
  }
}

int main()
{
    cout << "Fibonacci ricorsivo" << endl;

    //fibonacci
    /*
    fib(0) = 0
    fib(1) = 1
    fib(2) = f0+f1 = 1
    fib(3) = f2+f1 = 1 + 1 = 2
    */

    cout << "fib(0): " << fib(0) << endl;
    cout << "fib(1): " << fib(1) << endl;
    cout << "fib(2): " << fib(2) << endl << endl;

    cout << "fib(10): ";
    for (int i = 0; i < 10; i++) {
      cout << fib(i) << " ";
    }
    cout << endl;

    return 0;
}
