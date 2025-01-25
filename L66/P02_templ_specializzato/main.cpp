#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Printer {
public:
  static void prt(T val) {
    cout << "Generico: " << val << endl;
  }
};

template <>
class Printer<int> {
public:
  static void prt(int val) {
    cout << "INT: " << val << endl;
  }
};

template <>
class Printer<string> {
public:
  static void prt(string val) {
    cout << "STR: " << val << endl;
  }
};

int main() {
  cout << "Template specializzato" << endl;

  Printer<double>::prt(12.3);
  Printer<int>::prt(100);
  Printer<string>::prt("hello");

  return 0;
}
