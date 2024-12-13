#include <iostream>

using namespace std;

int main() {
    cout << "op-ternario" << endl;

    int a = 20;
    int b = 10;
    int max = 0;

    if (a > b) max = a;
    else max = b;

    cout << "max: " << max << endl;

    // if ternario
    // ( expr ? aaa : bbb )

    cout << "max 2: " << ( (a < b) ? b : a  ) << endl;

    return 0;
}
