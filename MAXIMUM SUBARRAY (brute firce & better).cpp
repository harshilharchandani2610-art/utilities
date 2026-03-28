#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
void max_subarray_brute(int n, int a[]) {
    int max_sum = INT_MIN;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int sum = 0;
            for(int k = i; k <= j; k++) {
                sum += a[k];
            }
            if(sum > max_sum){
                
         max_sum = sum;}
        }
    }
    cout << "Brute force max subarray sum: " << max_sum << endl;
}
void max_subarray_better(int n, int a[]) {
    int max_sum = INT_MIN;
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += a[j];
            if(sum > max_sum) max_sum = sum;
        }
    }
    cout << "Better brute force max subarray sum: " << max_sum << endl;
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
    cout<<endl;
    max_subarray_brute(n,a);
    max_subarray_better(n,a);
    
}
    
}
