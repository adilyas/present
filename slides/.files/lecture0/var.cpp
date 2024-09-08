#include <iostream>

using namespace std;

int main() {
    int a; // unitialized - непроинициализировано
    int b = 3;
    a = 2;
    int c = a + b, d = a - b;
    cout << c << " " << d << endl;
}
