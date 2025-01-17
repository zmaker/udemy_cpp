#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void leggiSensore(float *temp, float *hum, float *press){
  *temp = 12.0;
  *hum = 56.0;
  *press = 1000.12;
}

void scambia(int *a, int *b){
  int temp = 0;
  if ((a != nullptr) && (b != nullptr)) {
    temp = *a;
    *a = *b;
    *b = temp;
  }
}

void setup(int *st){
  if (st != nullptr) {
    *st = 1;
  }
}

void prta(int *pa, int ncelle){
  for (int i = 0; i < ncelle; i++) {
    cout << pa[i] << " ";
  }
  cout << endl;
}

void raddoppia(int *pa, int ncelle){
  for (int i = 0; i < ncelle; i++) {
    pa[i] = 2*pa[i];
  }
}

void raddoppia2(int *pa, int ncelle){
  for (int i = 0; i < ncelle; i++) {
    *(pa + i) = *(pa + i) * 2;
  }
}

void toUp(string *ps){
  for (int i = 0; i < (*ps).size(); i++){
    (*ps)[i] = toupper( (*ps)[i] );
  }
}

int main()
{
    cout << "Es. Funzioni e pointer" << endl;

    // restiruzione valori multipli
    float temp = 0.0;
    float hum = 0.0;
    float press = 0.0;
    leggiSensore(&temp, &hum, &press);
    cout << "t: " << temp << endl;
    cout << "h: " << hum << endl;
    cout << "p: " << press << endl << endl;

    //scambio variabili
    int a = 10;
    int b = 20;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    scambia(&a, &b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl << endl;

    //funzione init
    int stato;
    cout << "stato: " << stato << endl;
    setup(&stato);
    cout << "stato: " << stato << endl;

    //raddoppia array
    int numeri[] = {1,2,3,4,5,6,7};
    int sizea = sizeof(numeri)/sizeof(int);

    prta(numeri, sizea);
    raddoppia(numeri, sizea);
    prta(numeri, sizea);
    raddoppia2(numeri, sizea);
    prta(numeri, sizea);

    string str = "hello world!";
    cout << "str: " << str << endl;
    toUp(&str);
    cout << "str: " << str << endl;

    return 0;
}
