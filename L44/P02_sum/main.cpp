#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {
    cout << "somma numeri" << endl;
    if (argc < 2) {
      cout << "utilizzo: " << argv[0] << " num1 num2 ..." << endl;
    }

    int somma = 0;
    for (int i = 0; i < argc; i++){
      somma += atoi(argv[i]);
    }
    cout << "somma: " << somma << endl;

    return 0;
}
