#include <iostream>
using namespace std;

int main() {
    int matrix1[3][3], matrix2[3][3], result[3][3];

    // Input the elements of the first matrix
    cout << "Enter the elements of the first matrix (3x3):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Input the elements of the second matrix
    cout << "Enter the elements of the second matrix (3x3):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Multiply the two matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the result matrix in tabular form
    cout << "Resultant Matrix (3x3):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
