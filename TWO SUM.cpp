#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"enter the number of elements in an Array : ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cout<<"enter the element "<<i+1<<" :";
        cin>>arr[i];
    }
    cout<<"\n your given array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int target;
    cout<<"enter the target you want to complete by adding two number from the Array : ";
    cin>>target;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<"yes, you can complete the target by these two number"<<endl;
                cout<<"the index at which those to numbers are : "<<i<<" "<<j<<endl;
            }
        }
    }
}
