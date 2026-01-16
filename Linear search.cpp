#include <bits/stdc++.h>
using namespace std;
int Linearsearch(int arr[],int n,int num){
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return arr[i];
        }}
        return -1;
}
int main() {
    int n;
    cout<<"enter the number of element in an Array:";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cout<<"enter the element"<<i+1<<":";
        cin>>arr[i];
    }
    int num;
    cout<<"enter the number you ant to search:";
    cin>>num;
    cout<<"\n Your given Array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int search=Linearsearch(arr,n,num);
    if(search==-1){
            cout<<"the given number is not present in an Array.";
    }
    else{
            cout<<"your number is present in an Array:"<<search;
    }
    
}
