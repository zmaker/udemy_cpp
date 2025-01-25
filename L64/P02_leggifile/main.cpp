#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
  cout << "lettura file" << endl;

  ifstream f("file2.txt");
  if (!f) {
    cout << "errore file!" << endl;
    return 1;
  }
  string riga;
  while(getline(f, riga)) {
    cout << riga << endl;
  }

  f.close();

  return 0;
}
