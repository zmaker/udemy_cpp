#include <iostream>

using namespace std;

int glob = 10;

void saluta() {
  cout << "ciao" << endl;
}

void somma(int a, int b){
  int ans = a + b; // + glob;
  cout << "somma: " << ans << endl;
}

int sum(int a, int b){
  return a + b;
}

float sum(float a, float b) {
  return a + b;
}

int main(){
  cout << "funzioni" << endl;

  saluta();

  somma(10, 20);

  int n = 23;
  int m = 45;
  somma(n, m);

  int ris = sum(45, 56);
  cout << "ris: " << ris << endl;

  float ris2 = sum(45.5f, 56.7f);
  cout << "ris: " << ris2 << endl;

  return 0;
}
