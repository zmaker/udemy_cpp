#include <iostream>

using namespace std;

void calcola(int a, int b, auto op){
  cout << "ans: " << op(a,b) << endl;
}

int main() {
  cout << "Lambda function" << endl;

  // [cattura](param) -> ret { corpo }

  auto hello = [](){
    cout << "Hello lambda" << endl;
  };
  hello();

  auto f2 = [](int a, int b) -> int {
    return a+b;
  };
  cout << "f2: " << f2(10,20) << endl;

  int x = 10;
  int y = 40;

  auto f3 = [x, y]() -> int {
    return x+y;
  };
  cout << "f3: " << f3() << endl;

  auto f4 = [&x]() {
    x++;
  };
  f4();
  cout << x << endl;

  int conteggio = 0;
  auto inc = [conteggio]() mutable {
    conteggio++;
    cout << "C l:" << conteggio << endl;
  };

  cout << "C:" << conteggio << endl;
  inc();
  inc();
  cout << "C:" << conteggio << endl;

  calcola(10,5, [](int x, int y){ return x+y; });
  calcola(10,5, [](int x, int y){ return x*y; });

  return 0;
}
