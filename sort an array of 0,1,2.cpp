#include <bits/stdc++.h>
using namespace std;
void Sort_Array(int arr[],int n){
    int low=0, mid =0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[high],arr[mid]);
            high--;
            
        }
    }
}
int main() {
    int n;
    cout<<"enter the elements in Array: ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cout<<"enter the element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"\n your Array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Sort_Array(arr,n);
    cout<<"\n your soretd Array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
