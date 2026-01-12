#include <bits/stdc++.h>
using namespace std;
void leftRotate(int arr[],int n,int d){
 d=d%n;
 reverse(arr,arr+d);
 reverse(arr+d,arr+n);
 reverse(arr,arr+n);
}
int main() {
    int n;
    cout<<"enter the number of element in an Array:";
    cin>>n;
    int d;
    cout<<"\n enter the nuber of position you want to turn left:";
    cin>>d;
    int arr[100];
    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<":";
        cin>>arr[i];
    }
    cout<<"your given Array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    leftRotate(arr,n,d);
    cout<<"\n Update array after left rotation is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
