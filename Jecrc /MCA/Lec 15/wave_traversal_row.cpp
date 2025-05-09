#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[100][100];  // Assumption: max size is 100x100

    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nWave Traversal of the matrix:\n";
    for (int j = 0; j < cols; j++) {
        if (j % 2 == 0) {
            // Even column: top to bottom
            for (int i = 0; i < rows; i++) {
                cout << matrix[i][j] << " ";
            }
        } else {
            // Odd column: bottom to top
            for (int i = rows - 1; i >= 0; i--) {
                cout << matrix[i][j] << " ";
            }
        }
       //
    }

    return 0;
}
