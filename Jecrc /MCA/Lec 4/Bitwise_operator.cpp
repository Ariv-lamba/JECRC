#include <iostream>
using namespace std;

int main() {
    int a = 5; // 0101
    int b = 3; // 0011

    cout << "a = " << a << ", b = " << b << endl;
    cout << "a & b = " << (a & b) << endl;  // 0001
    cout << "a | b = " << (a | b) << endl;  // 0111
    cout << "a ^ b = " << (a ^ b) << endl;  // 0110
    cout << "~a = " << (~a) << endl;        // 2's complement
    cout << "a << 1 = " << (a << 1) << endl; // Left shift: 1010
    cout << "a >> 1 = " << (a >> 1) << endl; // Right shift: 0010

    return 0;
}
