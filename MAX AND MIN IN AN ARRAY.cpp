#include <bits/stdc++.h>
using namespace std;
void MIN_MAX(int n,int a[]){
    int maxVal = INT_MIN;
    int minVal = INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]>maxVal){
            maxVal=a[i];
        }
        if(a[i] < minVal){
            minVal=a[i];
        }
    }
    cout<<"maximum value is : "<<maxVal<<endl;
    cout<<"minimum value is : "<<minVal<<endl;
}
int main() {
    int n,a[100];
    cout<<"enter the number of element in an array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter elemnet "<<i+1<<" : ";
        cin>>a[i];
    }
    cout<<"Your given array is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    MIN_MAX(n,a);
}
