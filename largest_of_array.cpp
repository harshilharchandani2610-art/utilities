#include <bits/stdc++.h>
using namespace std;

int LargestArray(int arr[], int n){
    int Largest = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > Largest){
            Largest = arr[i];
        }
    }
    return Largest;
}

int main() {
    int n;
    int arr[100];
    cout << "enter the number of element in Array:";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "enter the element" << i+1 << ":";
        cin >> arr[i];
    }

    cout << "the given Array is:";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int maxElement = LargestArray(arr, n);
    cout << "the Largest elemnt in the Array is:" << maxElement << endl;

    return 0;
}
