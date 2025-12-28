#include <bits/stdc++.h>
using namespace std;
long factorial(int n){
    if(n<=1){
        return n;
    }
    return n*factorial(n-1);
}
int main() {
    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;
    cout<<factorial(n);
    
}
