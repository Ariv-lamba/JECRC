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

    cout << "\nBoundary elements in anti-clockwise order:\n";

    // Left column (top to bottom)
    for (int i = 0; i < rows; i++) {
        cout << matrix[i][0] << " ";
    }

    // Bottom row (left to right, excluding first column)
    for (int j = 1; j < cols; j++) {
        cout << matrix[rows - 1][j] << " ";
    }

    // Right column (bottom to top, excluding top and bottom)
    if (cols > 1) {
        for (int i = rows - 2; i >= 0; i--) {
            cout << matrix[i][cols - 1] << " ";
        }
    }

    // Top row (right to left, excluding first and last columns)
    if (rows > 1) {
        for (int j = cols - 2; j > 0; j--) {
            cout << matrix[0][j] << " ";
        }
    }

    return 0;
}
