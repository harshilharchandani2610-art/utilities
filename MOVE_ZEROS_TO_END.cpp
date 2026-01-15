#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in array: ";
    cin >> n;
    int arr[100];
   
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }
    
    cout << "\nYour given array is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    int j = 0;
    for(j = 0; j < n && arr[j] != 0; j++) {
    }
    for(int i = j + 1; i < n; i++) {
        if(arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    
    cout << "Updated array : ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
