#include <iostream>

using namespace std;

int main() {
    cout << "More Pointer" << endl;

    //puntatore
    int *p;
    int n = 123;

    p = &n;

    cout << "p indirizzo: " << p << endl;
    cout << "p valore:    " << *p << endl;

    *p = 99;
    cout << "p valore:    " << *p << endl;
    cout << "n valore:    " << n << endl;

    int *p2;
    p2 = p;
    cout << "p2 valore:   " << *p2 << endl;

    (*p2)++;
    cout << "p2 valore:   " << *p2 << endl;
    cout << "p valore:    " << *p << endl;
    cout << "n valore:    " << n << endl;

    //puntatori e array
    int num[5] = {12,23,34,45,56};
    int *pa = num;
    int *pb = pa;
    cout << "pa valore:    " << *pa << endl;
    cout << "pa addr:      " << pa << endl;
    cout << "pa valore:    " << pa[0] << endl;
    pa++;
    cout << "pa valore:    " << *pa << endl;
    cout << "pa addr:      " << pa << endl;
    for (int i = 0; i < 5; i++) {
      cout << pb[i] << " ";
    }
    cout << endl;

    //puntatore nullo
    int *ptr = nullptr;

    //puntatore costante
    int m = 234;
    int *const pm = &m;
    //pm++;

    //puntatore a una costante
    const int x = 45;
    const int *pc = &x;
    //*pc = 1;

    //puntatore a puntatore
    int q = 12;
    int *pq = &q;
    int **ppq = &pq;

    return 0;
}
