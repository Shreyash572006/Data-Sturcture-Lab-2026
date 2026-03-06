#include <iostream>
using namespace std;

int main() {
    int arr[100], n = 0, ch, val, pos, i;

    while (true) {
        cout << "\n1.Add 2.Delete 3.Search 4.Update 5.Show 6.Exit\nChoice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter value: ";
                cin >> val;
                arr[n] = val;
                n++;
                break;

            case 2:
                cout << "Enter index to delete: ";
                cin >> pos;
                for (i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                break;

            case 3:
                cout << "Enter value to search: ";
                cin >> val;
                for (i = 0; i < n; i++) {
                    if (arr[i] == val) cout << "Found at index " << i << endl;
                }
                break;

            case 4:
                cout << "Enter index and new value: ";
                cin >> pos >> val;
                arr[pos] = val;
                break;

            case 5:
                cout << "Elements: ";
                for (i = 0; i < n; i++) cout << arr[i] << " ";
                cout << endl;
                break;

            case 6:
                return 0;
        }
    }
}