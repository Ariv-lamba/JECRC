#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // 1. if
    if (num > 0) {
        cout << "Number is positive.\n";
    }

    // 2. if-else
    if (num % 2 == 0) {
        cout << "Even number.\n";
    } else {
        cout << "Odd number.\n";
    }

    // 3. nested if-else
    if (num >= 0) {
        if (num == 0)
            cout << "Number is zero.\n";
        else
            cout << "Number is positive (non-zero).\n";
    } else {
        cout << "Number is negative.\n";
    }

    // 4. switch-case
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;

    switch (day) {
        case 1: cout << "Monday\n"; break;
        case 2: cout << "Tuesday\n"; break;
        case 3: cout << "Wednesday\n"; break;
        case 4: cout << "Thursday\n"; break;
        case 5: cout << "Friday\n"; break;
        case 6: cout << "Saturday\n"; break;
        case 7: cout << "Sunday\n"; break;
        default: cout << "Invalid day number.\n";
    }

    return 0;
}
