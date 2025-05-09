#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 0;

    // Arithmetic
    cout << "a + 5 = " << a + 5 << endl;
    cout << "a - 3 = " << a - 3 << endl;

    // Edge case: division by zero
    if (b != 0) {
        cout << "a / b = " << a / b << endl;
    } else {
        cout << "Division by zero not allowed!" << endl;
    }

    // Logical
    cout << "(a > 5 && b == 0): " << ((a > 5 && b == 0) ? "true" : "false") << endl;

    return 0;
}
