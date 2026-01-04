#include <bits/stdc++.h>
using namespace std;

int secondSmallestElement(int a[], int n) {
    if (n < 2) {
        return -1; }
    int smallest = a[0];
    int ssmallest = INT_MAX;
    for(int i = 0; i < n; i++) { 
        if(a[i] < smallest) {
            ssmallest = smallest;
            smallest = a[i];
        }
        else if(a[i] < ssmallest && a[i] != smallest) {
            ssmallest = a[i];
        }
    }
    return ssmallest;
}

int main() {
    int n;
    cout << "Enter the number of elements in an Array: ";
    cin >> n;
    
    if (n < 2) {
        cout << "Array needs at least 2 elements!" << endl;
        return 1;
    }
    
    int a[100];
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << (i+1) << ": ";
        cin >> a[i];
    }
    
    cout << "The given Array is: ";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    int ssmallest = secondSmallestElement(a, n);
    cout << "The second smallest element is: " << ssmallest << endl;
    
    return 0;
}
