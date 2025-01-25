#include <iostream>
#include "rect.h"

using namespace std;

Rettangolo::Rettangolo(){
  x = 0;
  y = 0;
  w = 0;
  h = 0;
  area = 0;
}

Rettangolo::Rettangolo(int larg, int alt){
  x = 0;
  y = 0;
  w = larg;
  h = alt;
  area = w*h;
}

Rettangolo::~Rettangolo(){
  cout << "distrutto!" << endl;
}

int Rettangolo::getArea(){
  area = w*h;
  return area;
}
