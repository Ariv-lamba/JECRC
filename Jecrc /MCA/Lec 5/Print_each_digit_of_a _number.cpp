#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // First, reverse the number to print digits from left to right
   // int reversed = 0;
    int temp = num;
    while (temp > 0) {
      int x = temp%10;
      cout << x << endl;
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    // Print digits of the reversed number
    while (reversed > 0) {
        cout << reversed % 10 << endl;
        reversed /= 10;
    }

    return 0;
}
