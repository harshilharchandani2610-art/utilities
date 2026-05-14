#include <bits/stdc++.h>
using namespace std;
void SET_matrix(vector<vector<int>>& a, int n, int m) {
    int col0 = 1;
    //mark rows and columns using the first row/column
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 0) {
                a[i][0] = 0;
                if (j != 0)
                    a[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }
    //fill inner matrix based on markers
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (a[i][0] == 0 || a[0][j] == 0) {
                a[i][j] = 0;
            }
        }
    }

    //operate on first row & column 
    if (a[0][0] == 0) {
        for (int j = 0; j < m; j++) a[0][j] = 0;
    }
    if (col0 == 0) {
        for (int i = 0; i < n; i++) a[i][0] = 0;
    }
}

int main() {
    int n, m;
    cout << "enter number of rows : ";
    cin >> n;
    cout << "enter number of columns : "; 
    cin >> m;

    vector<vector<int>> a(n, vector<int>(m));
    // input of 2D martrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    // output of original matrix
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    SET_matrix(a, n, m);
    cout<<endl;
    // output after martrix SET zero.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}