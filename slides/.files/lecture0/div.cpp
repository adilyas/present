#include <iostream>

using namespace std;

int main() {
    int a = 5;
    cout << a / 2 << endl; // prints 2
    cout << a / 2. << endl; // prints 2.5
    float b = 15;
    cout << b / a << endl; // prints 3.0(!) - in fact not but it's float
}
