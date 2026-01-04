#include <bits/stdc++.h>
using namespace std;
int smallestElement(int a[],int n){
    int smallest=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<smallest){
            smallest=a[i];
        }
    }
    return smallest;
}
int main() {
    int n;
    cout<<"enter the number of elements in an Array: ";
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cout<<"enter the element: "<<i+1<<" ";
        cin>>a[i];
    }
    cout<<"the given Array is:";
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
    int ssmallest=smallestElement(a,n);
    cout<<"\n the smallest element of the given array is: "<<ssmallest;
}
