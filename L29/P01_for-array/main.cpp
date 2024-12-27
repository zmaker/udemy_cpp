#include <iostream>

using namespace std;

int main() {
  cout << "array e cicli" << endl;

  int t[5];
  for (int i = 0; i < 5; i++){
    cout << t[i] << " ";
  }
  cout << endl;

  cout << "init dell'array" << endl;
  for (int i = 0; i < 5; i++){
    t[i] = 0;
  }

  for (int i = 0; i < 5; i++){
    cout << t[i] << " ";
  }
  cout << endl;

  //init interattivo
  int temp[5];
  for (int i = 0; i < 5; i++){
    cin >> temp[i];
  }
  //stampo i valori acquisiti
  for (int i = 0; i < 5; i++){
    cout << temp[i] << " ";
  }
  cout << endl;

  return 0;
}
