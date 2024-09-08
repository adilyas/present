#include <iostream>
#include <cmath> // инклудим cmath

using namespace std;

int main() {
    cout << sqrt(9) << endl; // prints 3, but the return value is always real(возвращаемое значение всегда вещественное)
    cout << sqrtl(1000000000000L) << endl; // sqrtl для большей точности
    cout << sqrtl((long double)(1000000000000L)) << endl; // то же, что и sqrtl
}
