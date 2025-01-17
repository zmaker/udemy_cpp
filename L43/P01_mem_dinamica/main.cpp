#include <iostream>

using namespace std;

int main()
{
    cout << "Memoria Dinamica" << endl;

    int n = 123;
    int buf[10];

    int *p = new int(42);
    cout << "valore di p: " << *p << endl;
    cout << "addr di p: " << p << endl;

    delete p;
    cout << "addr di p: " << p << endl;
    p = nullptr;
    cout << "addr di p: " << p << endl;

    return 0;
}
