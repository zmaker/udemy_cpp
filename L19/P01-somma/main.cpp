#include <iostream>

using namespace std;

const int TOT_NUM = 5;

int main() {
  cout << "Somma e media" << endl;

  int somma = 0;
  int n = 0;

  for (int i = 0; i < TOT_NUM; i++){
    cout << "numero: ";
    cin >> n;

    //somma = somma + n;
    somma += n;
  }
  cout << "somma: " << somma << endl;

  float media = (float)somma / TOT_NUM;
  cout << "media: " << media << endl;

  return 0;
}
