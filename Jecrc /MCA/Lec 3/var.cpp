#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';
    bool flag = true;

    cout << "int a = " << a << ", Size: " << sizeof(a) << " bytes\n";
    cout << "float b = " << b << ", Size: " << sizeof(b) << " bytes\n";
    cout << "char c = " << c << ", Size: " << sizeof(c) << " bytes\n";
    cout << "bool flag = " << flag << ", Size: " << sizeof(flag) << " bytes\n";

    return 0;
}
