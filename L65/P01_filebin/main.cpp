#include <iostream>
#include <fstream>

using namespace std;

int main() {
  cout << "file binari" << endl;

  int n = 123;
  double val = 3.14;

  ofstream of("file.bin", ios::binary);

  if (!of) {
    cout << "Errore file" << endl;
    //cerr << "Errore file" << endl;
    return 1;
  }

  of.write(reinterpret_cast<char*>(&n), sizeof(n));
  of.write(reinterpret_cast<char*>(&val), sizeof(val));

  of.close();

  cout << "lettura file" << endl;
  ifstream infile;
  infile.open("file.bin", ios::binary);
  if (!infile) {
    cout << "Errore file" << endl;
    //cerr << "Errore file" << endl;
    return 1;
  }
  int a;
  double b;
  infile.read(reinterpret_cast<char*>(&a), sizeof(a));
  infile.read(reinterpret_cast<char*>(&b), sizeof(b));

  cout << "a: " << a << endl;
  cout << "b: " << b << endl;

  infile.close();

  return 0;
}
