#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    cout << "Passaggio parametri a programma" << endl;

    cout << "num par: " << argc << endl;
    for (int i = 0; i < argc; i++) {
      cout << i << ": " << argv[i] << endl;
    }

    return 0;
}
