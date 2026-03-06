#include <iostream>

using namespace std;

int main() {
    int a[2][2], b[2][2], result[2][2];
    int choice, i, j, k;

    cout << "Enter elements of first 2x2 matrix:" << endl;
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of second 2x2 matrix:" << endl;
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            cin >> b[i][j];
        }
    }

    cout << "\nChoose operation:\n1. Addition\n2. Subtraction\n3. Multiplication\nEnter choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            for (i = 0; i < 2; ++i) {
                for (j = 0; j < 2; ++j) {
                    result[i][j] = a[i][j] + b[i][j];
                }
            }
            break;

        case 2:
            for (i = 0; i < 2; ++i) {
                for (j = 0; j < 2; ++j) {
                    result[i][j] = a[i][j] - b[i][j];
                }
            }
            break;

        case 3:
            for (i = 0; i < 2; ++i) {
                for (j = 0; j < 2; ++j) {
                    result[i][j] = 0;
                    for (k = 0; k < 2; ++k) {
                        result[i][j] += a[i][k] * b[k][j];
                    }
                }
            }
            break;

        default:
            cout << "Invalid choice";
            return 1;
    }

    cout << "\nResultant Matrix:" << endl;
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}