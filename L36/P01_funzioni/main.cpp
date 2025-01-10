#include <iostream>
#include <string>
#include <vector>

using namespace std;

void saluto(string nome){
  cout << "ciao, " << nome << endl;
}

string sayHello(string nome){
  return "Hi, " + nome;
}

void prt(char str[]) {
  cout << str << endl;
}

int sommaArray(const int arr[], int size) {
  int s = 0;
  for (int i = 0; i < size; i++) {
    s += arr[i];
  }
  return s;
}

int sommaVector(const vector<int>& num) {
  int s = 0;
  for (int n : num){
    s += n;
  }
  return s;
}

int main() {
  cout << "funzioni" << endl;

  string str = "Mario";
  saluto(str);
  saluto("Luigi");

  cout << sayHello("Anna") << endl;

  char msg[] = "Ciao Mondo!";
  prt(msg);

  int numeri[] = {1,2,3,4,5};
  int sa = sommaArray(numeri, 5);
  cout << "somma array: " << sa << endl;

  vector<int> nn = {2,4,6,8,10};
  cout << "somma vector: " << sommaVector(nn) << endl;

  return 0;
}
