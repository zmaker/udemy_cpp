#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  cout << "printf" << endl;

  printf("Hello C++\n");
  int n = 123;
  printf("codice: %d\n", n);
  int count = 56;
  printf("codice: %d \t conteggio: %d \n", n, count);

  char ch = 'a';
  printf("ch= %c\n", ch);
  printf("msg= %s\n", "ciao come va?");

  float t = 18.2345;
  printf("t: %f\n", t);
  printf("t: %10.2f\n", t);
  printf("t: %10.3f\n", t);
  printf("t: %10.4f\n", t);

  printf("t: %010.2f\n", t);
  printf("t: %+10.2f\n", t);

  printf("n: %10d\n", n);
  printf("n: %010d\n", n);

  int dd = 1;
  int mm = 5;
  int yy = 2024;
  printf("%d/%d/%d\n", dd, mm, yy);
  printf("%02d/%02d/%04d\n", dd, mm, yy);
  printf("%2d/%2d/%4d\n", dd, mm, yy);

  printf("%-10d", n);

  return 0;
}
