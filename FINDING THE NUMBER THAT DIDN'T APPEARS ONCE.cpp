#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in an Array: ";
    cin >> n;
    int arr[100];
    // input of an Array
    for(int i = 0; i < n; i++) {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> arr[i];
    }
    // output of a given Array 
    cout << "\nYour given Array is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // loop to check wheather the number appears once or NOT!!
    for(int i = 0; i < n; i++) {
        int num = arr[i];
        int count = 0;  
        for(int j = 0; j < n; j++) {
            if(arr[j] == num) {
                count++;
            }
        }
        
        if(count == 1) {
            cout << "The number that didn't appear twice is: " << num << endl;
            return 0;
        }
    }
    
    cout << "No number appears exactly once!" << endl;
    return 0;
}
