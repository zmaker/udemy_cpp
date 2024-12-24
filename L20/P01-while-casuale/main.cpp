#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  cout << "while casuale" << endl;
  srand(time(0));

  int n = 0;
  while (n != 7){
    n = rand()%20;
    cout << n << " ";
  }

  return 0;
}
