#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"enter the number of elements in an Array : ";
    cin>>n;
    int arr[100];
    // input of an Array
    for(int i=0;i<n;i++){
        cout<<"enter the element "<<i+1<<" :";
        cin>>arr[i];
    }
    // output of given an Array
    cout<<"\n your given Array is."<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int maxi=0;
    int count=0;
    // counts the number of conscetive ones in the given Array 
    // for exapmle A[] = [2,1,1,1,2,2,3,1,]
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count ++;
            maxi=max(maxi,count);
        }
        else{
            count=0;
        }
    }
    cout<<"Maximum conscetive ones in this Array is : "<<maxi;
    // maximum number of ones will be 3 
}
