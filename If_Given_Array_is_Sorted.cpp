#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i] < arr[i-1]){
         return false;   
        }
    }
    return true;
}
int main() {
    int n;
    cout<<"enter the element in an Array:";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cout<<"enter element "<<i+1<<":";
        cin>>arr[i];
    }
    cout<<"your given Array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    if(isSorted(arr,n)){
        cout<<"\n your given Array is sorted."<<endl;
    }
    else{
        cout<<"\n your given Array is not sorted"<<endl;
    }
}
