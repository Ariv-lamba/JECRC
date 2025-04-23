#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int b = 5;
    int result;

    result = a + b;
    cout << a << " + " << b << " = " << result << std::endl;

    result = a - b;
    std::cout << a << " - " << b << " = " << result << std::endl;

    result = a * b;
    cout << a << " * " << b << " = " << result << std::endl;

    result = a / b;
    cout << a << " / " << b << " = " << result << std::endl;

    result = a % b;
    cout << a << " % " << b << " = " << result << std::endl;

    return 0;
}
