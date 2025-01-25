#include <iostream>

using namespace std;

class Calc{
  public:
    int a, b;

    Calc();
    Calc(int a, int b);
    int somma();
    int prod(int a , int b);
    double prod(double a , double b);

};

Calc::Calc(){
  a = 0;
  b = 0;
}
Calc::Calc(int a, int b){
  this->a = a;
  this->b = b;
}
int Calc::somma(){
  return a+b;
}
int Calc::prod(int a, int b){
  return a*b;
}
double Calc::prod(double a, double b){
  return a*b;
}

int main()
{
    cout << "polimorfismo - overloading" << endl;

    Calc c1;
    c1.a = 10;
    c1.b = 20;
    cout << "somma: " << c1.somma() << endl;
    cout << "prodotto1: " << c1.prod(10, 20) << endl;
    cout << "prodotto2: " << c1.prod(1.2, 2.3) << endl;

    return 0;
}
