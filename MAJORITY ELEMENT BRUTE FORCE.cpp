#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a[100];
    // input 
    cout<<"enter the number of elements in an array: ";
    cin>>n;
    for (int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<"; ";
        cin>>a[i];
    }
    // output 
    cout<<"Your given array is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    // Majority element
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
             if(a[j]==a[i]){
                 cnt ++ ;
        }}
        if(cnt>n/2) cout<<a[i]<<" ";}
}
