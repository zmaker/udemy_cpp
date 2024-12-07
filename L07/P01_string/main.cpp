#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "String" << endl;

  string s1 = "hello";
  cout << s1 << endl;

  string s2("stringa 2");
  cout << s2 << endl;

  string s3(10, '#');
  cout << s3 << endl;

  string s4 = s1;
  cout << s4 << endl;

  string s5 = s1 + s2;
  cout << s5 << endl;

  s3 += "*";
  cout << s3 << endl;

  int temp = 18;
  string msg = "temp milano: " + to_string(temp) + "C\n";
  cout << msg;

  string a = "mario";
  string b = "luigi";
  string c = "mario";
  bool cnf = (a == b);
  cout << "confronto: " << cnf << endl;
  cnf = (a == c);
  cout << "confronto: " << cnf << endl;

  char ch = msg[0];
  cout << "ch: " << ch << endl;
  ch = msg[1];
  cout << "ch: " << ch << endl;
  ch = msg[2];
  cout << "ch: " << ch << endl;
  ch = msg.at(3);
  cout << "ch: " << ch << endl;

  cout << "lunghezza di msg: " << msg.size() << " l2: " << msg.length() << endl;

  string sub = msg.substr(2, 10);
  cout << sub << endl;

  int pos = msg.find("mi");
  cout << "pos: " << pos << endl;
  pos = msg.find("zx");
  cout << "pos: " << pos << endl;
  //string::npos

  msg.replace(5, 6, "Roma");
  cout << msg;
  msg.insert(5, "di ");
  cout << msg;
  msg.erase(5, 3);
  cout << msg;

  string txt = "hello world";
  const char *pc = txt.c_str();
  cout << pc << endl;

  char buff[] = "hello c";
  string s10 = buff;
  cout << s10 << endl;

  return 0;
}
