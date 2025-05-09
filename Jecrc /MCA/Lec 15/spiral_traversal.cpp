#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[100][100]; // assuming max size is 100x100

    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nSpiral Traversal of the matrix:\n";

    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    while (top <= bottom && left <= right) {
        // Traverse top row (left to right)
        for (int j = left; j <= right; j++) {
            cout << matrix[top][j] << " ";
        }
        top++;

        // Traverse right column (top to bottom)
        for (int i = top; i <= bottom; i++) {
            cout << matrix[i][right] << " ";
        }
        right--;

        // Traverse bottom row (right to left)
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                cout << matrix[bottom][j] << " ";
            }
            bottom--;
        }

        // Traverse left column (bottom to top)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }

    return 0;
}
