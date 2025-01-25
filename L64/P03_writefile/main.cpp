#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  cout << "Write file" << endl;

  ofstream f;
  f.open("file3.txt");

  f << "ciao!" << endl;
  f << "hi!" << endl;
  f << "ola!" << endl;

  f.close();

  f.open("file4.txt", ios::app);
  f << "2025-01-25 - dati...." << endl;
  f.close();

  return 0;
}
