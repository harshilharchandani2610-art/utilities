#include <bits/stdc++.h>
using namespace std;

int main() {
        auto ms = chrono::duration_cast<chrono::milliseconds>(
    chrono::high_resolution_clock::now().time_since_epoch()
).count();
    long a=0,b=1,c=0,n;
    cin>>n;
    cout<<a;
    cout<<" "<<b;
    for(int i=0;i<n-2;i++){
        c=a+b;
        a=b;
        b=c;
        cout<<" "<<c;
    }
         auto af = chrono::duration_cast<chrono::milliseconds>(
    chrono::high_resolution_clock::now().time_since_epoch()
).count();
long time_taken=af-ms;
cout<<endl<<time_taken;
}
