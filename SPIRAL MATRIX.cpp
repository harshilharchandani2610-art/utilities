#include <bits/stdc++.h>
using namespace std;

vector<int> spiral_matrix(vector<vector<int>>& a, int n, int m) {
    int left = 0, right = m - 1;
    int top = 0, bottom = n - 1;
    vector<int> ans;

    while (top <= bottom && left <= right) {
        // Traverse top row (left to right)
        for (int i = left; i <= right; i++) {
            ans.push_back(a[top][i]);
        }
        top++;

        // Traverse right column (top to bottom)
        for (int i = top; i <= bottom; i++) {
            ans.push_back(a[i][right]);
        }
        right--;

        // Traverse bottom row (right to left), if exists
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                ans.push_back(a[bottom][i]);
            }
            bottom--;
        }

        // Traverse left column (bottom to top), if exists
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.push_back(a[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main() {
    int n, m;
    cout << "Enter number of rows : ";
    cin >> n;
    cout << "Enter number of columns : ";
    cin >> m;

    vector<vector<int>> a(n, vector<int>(m));
    // Input of 2D matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // Output of original matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // Print spiral traversal
    vector<int> ans = spiral_matrix(a, n, m);
    cout << "Spiral order: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}