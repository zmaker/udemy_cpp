#include <iostream>

using namespace std;

int main() {
    cout << "Reference e puntatori" << endl;

    int x = 123;
    cout << "x:" << x << endl;

    int &refx = x;
    cout << "ref x:" << refx << endl;

    x++;
    cout << "x:" << x << endl;

    refx++;
    cout << "ref x:" << refx << endl;
    cout << "x:" << x << endl;

    //puntatori
    int n = 100;

    int *p1;
    p1 = &n;

    cout << "n: " << n << endl;
    cout << "valore puntato da n: " << *p1 << endl;

    *p1 = 200;

    cout << "n: " << n << endl;
    cout << "valore puntato da n: " << *p1 << endl;

    return 0;
}
