#include <bits/stdc++.h>
using namespace std;
int RemoveDUplicate(int arr[],int n){
    int index=1;
    for(int i=1;i<n;i++){
        if(arr[i] != arr[i-1]){
            arr[index]=arr[i];
            index++;
        }
    }
    return index;
}
int main() {
    int n;
    cout<<"enter the number of elemnts in array:";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cout<<"enter the elemnt "<<i+1<<":";
        cin>>arr[i];
    }
    cout<<"\n the given array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int elemnt_in_array=RemoveDUplicate(arr,n);
    cout<<"\n No of elemnts in an array after removal of duplicates is:"<<elemnt_in_array;
    
}
