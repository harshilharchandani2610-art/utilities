#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    // input 
    for (int i = 0; i < n; i++) {
        cout << "enter the " << i + 1 << " element : ";
        cin >> a[i];
    }
    // print original array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    // deleceration of pos & neg array
    int pos[n], neg[n];
    // counter for array
    int p = 0, q = 0;
    // counting pos & neg
    for (int i = 0; i < n; i++) {
        if (a[i] >= 0) {
            pos[p++] = a[i];
        } else {
            neg[q++] = a[i];
        }
    }
    // rearanging pos & neg
    int i = 0;
    int pi = 0, ni = 0;
    while (pi < p && ni < q) {
        a[i++] = pos[pi++];
        a[i++] = neg[ni++];
    }
    while (pi < p) a[i++] = pos[pi++];
    while (ni < q) a[i++] = neg[ni++];
    // final output
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}