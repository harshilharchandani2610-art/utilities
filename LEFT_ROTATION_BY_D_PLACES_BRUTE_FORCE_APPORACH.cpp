#include <bits/stdc++.h>
using namespace std;
void leftRotate(int arr[],int n,int d){
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
    }
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
