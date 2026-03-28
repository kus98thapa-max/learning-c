#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3], Sum[3][3];

    cout << "Enter 9 elements for Matrix A:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }

    cout << "\nEnter 9 elements for Matrix B:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "B[" << i << "][" << j << "] = ";
            cin >> B[i][j];
        }
    }

    // Adding Matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display Result
    cout << "\nSum of Matrices (A + B):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << Sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
