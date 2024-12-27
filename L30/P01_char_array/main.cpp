#include <iostream>
#include <cstring>

using namespace std;

#define MAX_ARR_SIZE 10

int main() {
  cout << "Array di char" << endl;

  char str[6] = "mario";
  cout << str << endl;

  char nome[25];
  nome[0] = 'l';
  nome[1] = 'u';
  nome[2] = 'i';
  nome[3] = 'g';
  nome[4] = 'i';
  nome[5] = '\0';
  cout << nome << endl;

  char msg[] = "Nel mezzo del cammin di nostra vita...";
  cout << msg << endl;
  cout << "size msg: " << sizeof(msg) << endl;

  char dato[MAX_ARR_SIZE];

  char s1[20];
  char s2[20];
  cout << "s1: ";
  cin.getline(s1, 20);
  cout << "s2: ";
  cin.getline(s2, 20);
  cout << s1 << "-" << s2 << endl;

  int comp = strcmp(s1, s2);
  cout << "comp: " << comp << endl;
  if ( strcmp(s1, s2) == 0 ) {
    cout << "stringhe uguali" << endl;
  }

  strcat(s1, s2);
  cout << "concat: " << s1 << endl;

  cout << msg << endl;
  cout << "size msg: " << sizeof(msg) << "b" << endl;
  cout << "size msg: " << strlen(msg) << endl;

  if (strchr(msg, 'z')){
    cout << "trovata z" << endl;
  }

  if (strstr(msg, "cam")){
    cout << "trovato cam" << endl;
  }

  char a[30];
  strcpy(a, "hello");
  cout << "a: " << a << endl;

  return 0;
}
