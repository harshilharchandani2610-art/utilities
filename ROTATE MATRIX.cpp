#include <bits/stdc++.h>
using namespace std;
void rotate_matrix(vector<vector<int>>& a, int n) {
    //Transpose of matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(a[i][j], a[j][i]);
        }
    }
    //Reverse each row
    for (int i = 0; i < n; i++) {
        reverse(a[i].begin(), a[i].end());
    }
}
void rotate_matrix_anticlockwise(vector<vector<int>>& a, int n) {
    //Transpose of matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(a[i][j], a[j][i]);
        }
    }
    //Reverse each COLUMN
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n / 2; i++) {
            swap(a[i][j], a[n - 1 - i][j]);
        }
    }
}
int main() {
    int n;
    cout << "Enter number of rows and columns (for square matrix): ";
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    // Input of 2D matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    // Output of original matrix
    cout << "Original matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    rotate_matrix(a, n);
    // Output of rotated matrix.
    cout << "Matrix after 90 degree rotation:"<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    // output of anticlockwise rotattion.
    cout<<"matrix after 90 degree anticlockwise rotattion:"<<endl;
    rotate_matrix_anticlockwise(a,n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}