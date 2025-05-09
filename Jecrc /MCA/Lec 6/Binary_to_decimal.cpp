#include <iostream>
using namespace std;

int main() {
    long long binary;
    int decimal = 0, power = 1, remainder;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary > 0) {
        remainder = binary % 10;    // Get the last digit (0 or 1)
        decimal += remainder * power;  // Add it to the decimal number
        binary /= 10;  // Remove the last digit from the binary number
        power *= 2;    // Increase the power of 2 for the next place value
    }

    cout << "Decimal number is: " << decimal << endl;

    return 0;
}
