#include <iostream>

#define COSTANTE_1 123

using namespace std;

int main() {
  cout << "Variabili" << endl;

  int temp;  //dichiaro
  temp = 24; //assegno

  int press = 23;

  cout << "temp: " << temp << endl;

  int temp_stanza;
  int tempStanza;
  int temp2;
  //int 2temp ERRORE
  //int temp-stanza; ERR

  short s1 = 12;
  long l1 = 12345;
  char ch = 'a';
  bool FLAG = true;
  FLAG = false;

  int x,y,z;
  int a = 10, b = 20, c = 30;

  z = a + b;

  float f = 12.0;
  double d = 23.0;

  unsigned int n1 = 0;
  const float PI = 3.14;
  //PI = 23.0; ERRORE

  cout << "COST: " << COSTANTE_1 << endl;

  cout << "s1: " << s1 << "\t" << sizeof(s1) << endl;
  cout << "z: " << z << "\t" << sizeof(z) << endl;
  cout << "f: " << f << "\t" << sizeof(float) << endl;
  cout << "d: " << d << "\t" << sizeof(d) << endl;
  cout << "flag: " << FLAG << "\t" << sizeof(bool) << endl;

  return 0;
}
