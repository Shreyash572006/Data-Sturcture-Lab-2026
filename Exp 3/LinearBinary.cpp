#include <iostream>
using namespace std;

int main() {
    int a[100], n, k, i, ch, L, R, mid;

    cout << "Enter count: "; cin >> n;
    cout << "Enter numbers (sorted): ";
    for(i=0; i<n; i++) cin >> a[i];
    cout << "Enter key: "; cin >> k;

    cout << "1.Linear 2.Binary: "; cin >> ch;

    switch(ch) {
        case 1:
            for(i=0; i<n; i++) {
                if(a[i] == k) {
                    cout << "Found at index " << i;
                    return 0;
                }
            }
            cout << "Not found";
            break;

        case 2:
            L = 0; R = n-1;
            while(L <= R) {
                mid = (L + R) / 2;
                if(a[mid] == k) {
                    cout << "Found at index " << mid;
                    return 0;
                }
                if(a[mid] < k) L = mid + 1;
                else R = mid - 1;
            }
            cout << "Not found";
            break;
    }
    return 0;
}