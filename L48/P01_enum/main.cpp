#include <iostream>

using namespace std;

enum Days {
  LUN, MAR, MER, GIO, VEN, SAB, DOM
};

enum Stati {
  IDLE,
  RUNNING,
  ERROR,
  SETUP,
  DEBUG = 99,
  TEST
};

//enum tipizzata
enum class Colore {
  RED,
  GREEN,
  YELLOW,
  BLUE
};

enum class FontType : unsigned int {
  BOLD,
  ITALIC,
  UNDERLINE
};

int main() {
  cout << "Enum" << endl;

  Days oggi = LUN;
  if (oggi == LUN) {
    cout << "oggi e' lunedi'" << endl;
  }

  cout << oggi << endl;

  Stati st = IDLE;
  switch (st){
  case IDLE:
    cout << "idle" << endl;
    break;
  case RUNNING:
    cout << "run" << endl;
    break;
  }

  Colore c = Colore::GREEN;
  if (c == Colore::GREEN) {
    cout << "verde" << endl;
  }
  cout << (int)c  << endl;

  return 0;
}
