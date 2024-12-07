#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    cout << "Formattazioni" << endl;
    cout << "123456789012345678901234567890" << endl;
    cout << setw(10) << "Mario" << endl;
    cout << setw(10) << "Rossi" << endl;
    cout << setfill('_') << endl;
    cout << setw(20) << "Mario" << endl;
    cout << setfill(' ') << setw(10) << "Luigi" << endl;
    cout << endl;

    double x = 123.435563454556;
    cout << setprecision(3) << x << endl;
    cout << fixed;
    cout << setprecision(3) << x << endl;
    cout << setprecision(2) << x << endl;
    cout << setprecision(1) << x << endl;

    cout << scientific << setprecision(5) << x << endl;

    cout << endl << setbase(16) << 123 << endl;
    cout << hex << 234 << endl;
    cout << oct << 234 << endl;
    cout << dec << 234 << endl;

    cout << endl << "oggi c'è il sole!" << endl;

    cout << endl << endl;
    cout << "123456789012345678901234567890" << endl;
    cout << setw(10) << 1230;
    cout << setw(10) << 345;
    cout << setw(10) << 2673 << endl;
    cout << setw(10) << left << 1230;
    cout << setw(10) << left << 345;
    cout << setw(10) << left << 2673 << endl;
    cout << setw(10) << right << 1230;
    cout << setw(10) << right << 345;
    cout << setw(10) << right << 2673 << endl;

    cout << resetiosflags(ios::adjustfield);

    return 0;
}
