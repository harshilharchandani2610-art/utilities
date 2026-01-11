#include <bits/stdc++.h>
using namespace std;
void OneplaceLeft(int arr[],int n){
        int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    cout<<"\n the Array after one rotation to left is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
    int n;
    cout<<"enter the number of element in an Arrray:";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cout<<"enter the element "<<i+1<<":";
        cin>>arr[i];
    }
    cout<<"\n the given Array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    OneplaceLeft(arr,n);
}
