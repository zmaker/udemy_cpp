#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "elseif" << endl;

  int voto = 0;
  cout << "voto: ";
  cin >> voto;
  cout << endl;

  string g = "";

  if (voto <= 5){
    g = "insuff";
  } else if (voto == 6){
    g = "suff";
  } else if (voto == 7) {
    g = "buono";
  } else {
    g = "?";
  }

  cout << "giudizio: " << g << endl;


  return 0;
}
