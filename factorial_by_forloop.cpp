#include <bits/stdc++.h>
using namespace std;
int main() {
    int fac=1;
    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        fac= n * i;
    }
    cout<<"factorial of the given number is:"<<fac;
}
