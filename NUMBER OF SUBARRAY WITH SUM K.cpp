#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cout << "enter the number of elements in array: ";
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cout << "enter " << i+1 << " element: ";
        cin >> a[i];
    }
    cout << "enter the sum(K) : ";
    cin >> k;
    
    // original array
    for(int x : a) cout << x << " ";
    cout << endl;
    
    unordered_map<long long, int> mp;
    mp[0] = 1;
    long long sum = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
        if(mp.count(sum - k)) cnt += mp[sum - k];
        mp[sum]++;
    }
    cout << "total number of subarrays are: " << cnt << endl;
}