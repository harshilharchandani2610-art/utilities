#include <bits/stdc++.h>
using namespace std;

void BruteMissing(int arr[], int n) {
    for(int i=1; i<=n; i++) {
        int flag = 0;
        for(int j=0; j<n-1; j++) {
            if(arr[j] == i) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            cout << "missing number by brute force approach is: " << i << endl;
            return;
        }
    }
}

void BetterMissing(int arr[], int n) {
    int hash[101] = {0};
    for(int i=0; i<n-1; i++) {
        if(arr[i] >= 1 && arr[i] <= n)
            hash[arr[i]] = 1;
    }
    for(int i=1; i<=n; i++) {
        if(hash[i] == 0) {
            cout << "missing number by better approach(HASHING): " << i << endl;
            return;
        }
    }
}

void OptimalMissingSUM(int arr[], int n) {
    int expected_sum = (n * (n + 1)) / 2;
    int actual_sum = 0;
    for(int i=0; i<n-1; i++) {
        actual_sum += arr[i];
    }
    cout << "missing number by optimal approach(SUM): " << expected_sum - actual_sum << endl;
}

void OptimalMissingXOR(int arr[], int n) {
    int xor1 = 0;
    int xor2 = 0;
    for(int i=1; i<=n; i++) {
        xor1 ^= i;
    }
    for(int i=0; i<n-1; i++) {
        xor2 ^= arr[i];
    }
    cout << "missing number by optimal approach(XOR): " << (xor1 ^ xor2) << endl;
}

int main() {
    int n;
    cout << "enter the number of elements in an Array : ";
    cin >> n;
    
    int arr[100];
    cout << "enter " << n-1 << " elements numbers 1 to " << n << " :" << endl;
    for(int i=0; i<n-1; i++) {
        cout << "enter element " << i+1 << ": ";
        cin >> arr[i];
    }
    
    cout << "\nYour given Array is: ";
    for(int i=0; i<n-1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    BruteMissing(arr, n);
    BetterMissing(arr, n);
    OptimalMissingSUM(arr, n);
    OptimalMissingXOR(arr, n);
    
    return 0;
}
