#include <iostream>
using namespace std;

int main() {
    int s[100], n, top = -1, ch, val;

    cout << "Enter stack size: ";
    cin >> n;

    while (true) {
        cout << "\n1.Push 2.Pop 3.Display 4.Exit\nChoice: ";
        cin >> ch;

        if (ch == 1) {
            if (top >= n - 1) {
                cout << "Stack Full!" << endl;
            } else {
                cout << "Enter any number: ";
                cin >> val;
                top++;
                s[top] = val;
            }
        } 
        else if (ch == 2) {
            if (top < 0) {
                cout << "Stack Empty!" << endl;
            } else {
                cout << "Popped: " << s[top] << endl;
                top--;
            }
        } 
        else if (ch == 3) {
            if (top < 0) {
                cout << "Nothing to show!" << endl;
            } else {
                for (int i = top; i >= 0; i--) {
                    cout << s[i] << " ";
                }
                cout << endl;
            }
        } 
        else if (ch == 4) {
            break;
        } 
        else {
            cout << "Invalid Choice!" << endl;
        }
    }
    return 0;
}