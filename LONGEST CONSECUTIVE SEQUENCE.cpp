#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    // input
    for (int i = 0; i < n; i++) {
        cout << "enter the " << i + 1 << " element: ";
        cin >> a[i];
    }

    // print original array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    sort(a, a + n);          // so consecutive numbers are adjacent

    int cnt = 1;             // current consecutive length
    int largest = 1;         // maximum length found
    int last = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] == last + 1) {
            cnt++;
            last = a[i];
        } else if (a[i] != last) {
            cnt = 1;
            last = a[i];
        }
        largest = max(largest, cnt);
    }

    cout << "Length of longest consecutive sequence: " << largest << endl;
    return 0;
}