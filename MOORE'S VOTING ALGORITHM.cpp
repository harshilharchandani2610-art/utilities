#include <bits/stdc++.h>
using namespace std;
void Majority_element(int n,int a[]){
    int cnt=0,el;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            el=a[i];
        }
        else if (a[i]==el){
            cnt++;
        }
        else {
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(a[i]==el) cnt1++;}
         if(cnt1 > n/2){
        cout << "Majority element: " << el << endl;}
    else{
        cout << "No majority element" << endl;
    }
    }

int main() {
    int n,a[100];
    // input 
    cout<<"enter the number of elements in an array: ";
    cin>>n;
    for (int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<"; ";
        cin>>a[i];
    }
    // output 
    cout<<"Your given array is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    Majority_element(n,a);
}