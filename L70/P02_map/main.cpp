#include <iostream>
#include <map>

using namespace std;

int main() {
  cout << "STL Map" << endl;

  map<string, int> elenco; // mario - 3434343434
  elenco["mario"] = 1223345;
  elenco["luigi"] = 233434;
  elenco["anna"] = 343434;

  cout << "Mario: " << elenco["mario"] << endl;

  cout << "elenco completo" << endl;
  for (const auto &[nome, numero] : elenco) {
    cout << nome << ": " << numero << endl;
  }

  string src = "luigi";
  auto el = elenco.find(src);
  if (el != elenco.end()) {
    cout << src << ": " << el->second << endl;
  } else {
    cout << "non trovato" << endl;
  }

  return 0;
}
