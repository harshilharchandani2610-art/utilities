#include <bits/stdc++.h>
using namespace std;
int secondlargest(int arr[],int n){
    int largest=arr[0];
    int slargest=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>slargest && arr[i]!= largest){
            slargest=arr[i];
        }
    }
    return slargest;
}
int main() {
    int n;
    cout<<"enter the number of elements in Array:";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cout<<"enter the elmeent"<<i+1<<" :";
        cin>>arr[i];
    }
    cout<<"the given Array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    int Secondlargest= secondlargest(arr,n);
    cout<<"\n the second largest number is: "<<Secondlargest;
}
