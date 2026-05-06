#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cout << "enter the " << i+1 << " element : ";
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    int mini = a[0], profit = 0;
    for(int i = 1; i < n; i++) {
        profit = max(profit, a[i] - mini);
        mini = min(mini, a[i]);
    }
    cout << profit;
    return 0;
}