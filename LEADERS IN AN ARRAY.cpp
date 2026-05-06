#include <bits/stdc++.h>
using namespace std;
void learder_brute(vector<int> a,int n){
    for(int i=0;i<n;i++){
vector<int> leaders;
   for (int i = 0; i < n; i++) {
        bool leader = true;
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[i]) {
                leader = false;
                break;
            }
        }
        if (leader) {
            leaders.push_back(a[i]);
        }
    }
    cout<<leaders;
}
}
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
    learder_brute(a,n);
}
