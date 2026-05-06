#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    // input
    for (int i = 0; i < n; i++) {
        cout << "enter the " << i+1 << " element : ";
        cin >> a[i];
    }
    // original array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    // find next permutation
    int ind = -1;
    for (int i = n-2; i >= 0; i--) {
        if (a[i] < a[i+1]) {
            ind = i;
            break;
        }
    }
    if (ind == -1) {
        reverse(a.begin(), a.end());
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        return 0;
    }
    for (int i = n-1; i > ind; i--) {
        if (a[i] > a[ind]) {
            swap(a[i], a[ind]);
            break;
        }
    }
    reverse(a.begin() + ind + 1, a.end());
    // print next permutation.
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}