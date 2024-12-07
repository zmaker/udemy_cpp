#include <iostream>

using namespace std;

int main()
{
    cout << "ignore" << endl;
    int n;
    char s[25];

    cout << "numero: ";
    cin >> n;
    cin.ignore(80, '\n');

    cout << "nome: ";
    cin.getline(s, 25);
    cout << "n:" << n << " str: " << s << endl;


    return 0;
}
