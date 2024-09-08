#include <iostream>

using namespace std;

int main() {
    float a = 3.5;
    cout << int(a) << endl; // prints 3, value of variable a is converted to int
    cout << a << endl; // prints 3.5, variable remains unchanged
    int c = 100000, d = 100000;
    cout << (long long)(c) * d << endl;

    // conversion can be implicit(неявный)
    long long b = c;
    cout << b * d << endl; // yet another(еще одно) implicit conversion
}
