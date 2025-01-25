#include <iostream>
#include <stdexcept>
#include <cassert>

using namespace std;

int dividi(int a, int b) {
  int ret = 0;
  if (b == 0) {
    return 0;
  }
  ret = a/b;
  return ret;
}

int dividi2(int a, int b, int &ret) {
  if (b == 0) {
    return -1;
  }
  ret = a/b;
  return 0;
}

int dividi3(int a, int b) {
  int ret = 0;
  if (b == 0) {
    throw runtime_error("Divisione per 0");
  }
  ret = a/b;
  return ret;
}

void test(int n) {
  if (n < 0) throw invalid_argument("valore negativo!");
  if (n > 100) throw out_of_range("valore eccessivo!");
}

void test2(int n) {
  assert (n >= 0 && "Valore negativo! - test2() ");
  cout << "OK" << endl;
}

int main() {
  cout << "Errori" << endl;
  // https://en.cppreference.com/w/cpp/header/stdexcept

  cout << "caso 1: " << dividi(10, 0) << endl;
  int n = 0;
  if (dividi2(10, 0, n) == 0) {
    cout << "caso 2: " << n << endl;
  } else {
    cout << "caso 2: err!" << endl;
  }

  try {
    dividi3(10,0);
  } catch (const runtime_error &e){
    cout << "tipo errore: " << e.what() << endl;
  }

  try {
    test(1000);
  } catch (const invalid_argument &e) {
    cout << "invalid arg: " << e.what() << endl;
  } catch (const out_of_range &e) {
    cout << "out of range: " << e.what() << endl;
  } catch (...) {
    cout << "errore generico" << endl;
  }

  test2(-100);

  return 0;
}
