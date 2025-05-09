#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[100][100];  // assuming max size is 100x100

    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nBoundary elements in clockwise order:\n";

    // Top row
    for (int j = 0; j < cols; j++) {
        cout << matrix[0][j] << " ";
    }

    // Right column (excluding top and bottom corners)
    for (int i = 1; i < rows - 1; i++) {
        cout << matrix[i][cols - 1] << " ";
    }

    // Bottom row (only if more than one row)
    if (rows > 1) {
        for (int j = cols - 1; j >= 0; j--) {
            cout << matrix[rows - 1][j] << " ";
        }
    }

    // Left column (excluding top and bottom corners)
    if (cols > 1) {
        for (int i = rows - 2; i > 0; i--) {
            cout << matrix[i][0] << " ";
        }
    }

    return 0;
}
