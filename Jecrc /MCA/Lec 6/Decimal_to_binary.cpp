#include <iostream>
using namespace std;

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    int binary = 0, place = 1;

    while (decimal > 0) {
        int remainder = decimal % 2;  // Get the remainder when divided by 2
        binary += remainder * place;  // Add the remainder to the binary result
        decimal /= 2;  // Reduce the decimal number by dividing by 2
        place *= 10;   // Increase the place value (1, 10, 100, etc.)
    }

    cout << "Binary number is: " << binary << endl;

    return 0;
}
