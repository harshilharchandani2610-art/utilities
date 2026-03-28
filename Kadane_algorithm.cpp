#include <bits/stdc++.h>
using namespace std;
void Kadane_algorithm(int n,int a[]){
    if (n == 0) {
        cout << "max subarray sum is : 0 (empty array)\n";
        return;
    }
    int sum=0,max_sum = INT_MIN;
    for(int i=0;i<n;i++){
        sum += a[i];
        if(sum>max_sum){
            max_sum=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
}
int main() {
    int n,a[100];
    cout<<"enter the capacity of an Array: ";
    cin>>n;
    // input of Array.
    for(int i=0;i<n;i++){
        cout<<"enter element "<<i+1<<": ";
        cin>>a[i];
    }
    // output of given Array.
    cout<<"\n Your given Array is : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    Kadane_algorithm(n,a)
}
