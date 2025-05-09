#include <iostream>

using namespace std;

int main() {
    int rows ;
	cin >> rows;

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int space = 1; space <= rows - i; space++) {
            cout << "  ";
        }

        // Print increasing numbers
        int num = i;
        for (int j = 1; j <= i; j++) {
            cout << num++ << " ";
        }

        // Print decreasing numbers
        num -= 2;
        for (int j = 1; j < i; j++) {
            cout << num-- << " ";
        }

        cout << endl;
    }

    return 0;
}
