#include <iostream>

using namespace std;

int main() {
  cout << "While con flag" << endl;

  bool LOOP = true;

  int count = 0;
  while (LOOP){
    cout << count << " ";
    count++;

    if (count >= 5){
      LOOP = false;
    }
  }
  cout << endl << "END" << endl;

  return 0;
}
