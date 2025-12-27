#include <ctime>
#include <bits/stdc++.h>
using namespace std;
long f(int n){
    if(n<=1){
        return n;
    }
    
    return f(n-1)+f(n-2);
}

int main() {
    auto ms = chrono::duration_cast<chrono::milliseconds>(
    chrono::high_resolution_clock::now().time_since_epoch()
).count();
    int n;
    cin>>n;
    cout<<endl;
     for(int i=0;i<n;i++){
        cout<<' '<<f(i);

     }
     auto af = chrono::duration_cast<chrono::milliseconds>(
    chrono::high_resolution_clock::now().time_since_epoch()
).count();
int time_taken=af-ms;
cout<<endl<<time_taken;
    
}