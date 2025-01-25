#include <iostream>
#include "rect.h"

using namespace std;

int main()
{
    cout << "Esercizio multi file" << endl;

    Rettangolo r1;
    cout << r1.x << endl;

    Rettangolo r2(10, 20);
    cout << "area: " << r2.getArea() << endl;

    return 0;
}
