#include <iostream>
#include <iomanip> // делаем инклуд

using namespace std;

int main() {
    cout << fixed << setprecision(5); // устанавливаем точность в ровно 5 знаков после запятой
    cout << 5 / 3. << endl; // prints 1.66667 (exactly 5 positions)
}
