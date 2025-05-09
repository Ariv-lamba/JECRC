#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // To handle negative numbers
    if (num < 0) {
        num = -num; // Convert to positive for counting digits
    }

    int count = 0;
    
    // Edge case: if the number is 0
    if (num == 0) {
        count = 1;
    } else {
        // Loop to count digits
        while (num > 0) {
            num = num / 10;
            count++;
        }
    }

    cout << "Number of digits: " << count << endl;

    return 0;
}
