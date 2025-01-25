#include <iostream>
#include <typeinfo>

using namespace std;

template <class T>
T maggiore(T a, T b){
  T ret;
  if (a>b){
      ret = a;
  } else if (a == b) {
    ret = 0;
  } else {
    ret = b;
  }
  return ret;
}

template <typename T>
void test(T param) {
  cout << "id tipo: " << typeid(T).name() << endl;
}

template <class T>
class Punto{
public:
  T x,y;
  Punto();
  Punto(T, T);
  void print();
  T area();
};

template <class T>
Punto<T>::Punto() : x(0), y(0){};

template <class T>
Punto<T>::Punto(T a, T b) : x(a), y(b){};

template <class T>
void Punto<T>::print(){
  cout << "(" << x << "," << y << ")" << endl;
}

template <class T>
T Punto<T>::area(){
  return x*y;
}

int main()
{
  cout << "Template" << endl;

  int a = 10;
  int b = 20;
  cout << "m1: " << maggiore<int>(a,b) << endl;
  double c = 12.3;
  double d = 23.4;
  cout << "m2: " << maggiore<double>(c,d) << endl;

  test<int>(10);
  test<double>(12.3);

  Punto<int> p(10,10);
  p.print();

  return 0;
}
