#include <iostream>

using namespace std;

namespace geometria {
  int x,y;
  int z;
}

namespace algebra {
  int x,y,z;
  void saluta() {
    cout << "hello" << endl;
  }
}

namespace complessi {
  int za, zb;
}

using algebra::z;
using namespace complessi;

namespace test = algebra;

int main() {
  cout << "namespace" << endl;

  geometria::x = 10;
  geometria::y = 20;

  algebra::x = 99;
  z = 100;
  geometria::z = 200;

  cout << "algebra z: " << z << endl;
  cout << "algebra z: " << algebra::z << endl;
  cout << "geo z: " << geometria::z << endl;

  za = 12;
  zb = 45;
  cout << "z: " << za << "+" << zb << "i" << endl;

  algebra::saluta();
  test::saluta();

  return 0;
}
