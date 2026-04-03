#include <bits/stdc++.h>
using namespace std;

void Merge_sorted_array(int m, int n, int a[], int b[], int arr3[]) {
    int i = 0, j = 0, k = 0;
    // compare the elements of both the array
    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            arr3[k++] = a[i++];
        } else {
            arr3[k++] = b[j++];
        }
    }
    // insert the left over of first array
    while (i < m) {
        arr3[k++] = a[i++];
    }
    // inset the left overs of second array
    while (j < n) {
        arr3[k++] = b[j++];
    }
    
    cout << "Merged sorted array: ";
    for (int p = 0; p < m + n; p++) {
        cout << arr3[p] << " ";
    }
    cout << endl;
}

int main() {
    int n, m;
    int arr3[200];  
    
    cout << "Enter number of elements in first array: ";
    cin >> n;
    int a[100];
    // input of first array
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> a[i];
    }
    // ouput of first array
    cout << "First array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    // bubble sort for first array
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
    // ouput of first sorted array
    cout << "Sorted first array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    cout << "Enter number of elements in second array: ";
    cin >> m;
    int b[100];
    //  input of second array
    for (int i = 0; i < m; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> b[i];
    }
    // output of second array
    cout << "Second array: ";
    for (int i = 0; i < m; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    // bubble sort for second array
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - 1 - i; j++) {
            if (b[j] > b[j + 1]) {
                swap(b[j], b[j + 1]);
            }
        }
    }
    // ouput of second sorted array
    cout << "Sorted second array: ";
    for (int i = 0; i < m; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    
    Merge_sorted_array(n, m, a, b, arr3);
    
    return 0;
}