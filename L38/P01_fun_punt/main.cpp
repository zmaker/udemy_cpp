#include <iostream>

using namespace std;

void prta(int *pa, int size){
  for (int i = 0; i < size; i++) {
    cout << i << " " << *(pa+i) << " " << pa[i] << endl;
  }
}

void sens(int &t, int &h){
  t = 123;
  h = 67;
}

void sens2(int *t, int *h){
  *t = 99;
  *h = 23;
}

int main() {
  cout << "Puntatori e array" << endl;

  int arr[] = {10,20,30,40,50};
  int *p = arr;

  cout << arr[0] << endl;
  cout << arr[3] << endl;

  cout << *p << endl;
  cout << *(p+1) << endl;
  cout << *(p+2) << endl;

  prta(arr, 5);

  int temp = 0;
  int hum = 0;
  sens(temp, hum);
  cout << "dati sensore: " << temp << " " << hum << endl;
  sens2(&temp, &hum);
  cout << "dati sensore: " << temp << " " << hum << endl;

  return 0;
}
