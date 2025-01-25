#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  cout << "Files" << endl;
  ifstream f;
  f.open("file1.txt");

  string str;
  f >> str;
  cout << "1: " << str << endl;
  f >> str;
  cout << "2: " << str << endl;

  f.clear();
  f.seekg(0, ios::beg);
  f >> str;
  cout << "3: " << str << endl;

  f.clear();
  f.seekg(3, ios::beg);
  f >> str;
  cout << "4: " << str << endl;

  f.seekg(4, ios::cur);
  f >> str;
  cout << "4: " << str << endl;

  f.seekg(-5, ios::end);
  f >> str;
  cout << "5: " << str << endl;

  f.close();


  return 0;
}
