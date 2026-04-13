#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int reversed = 0;
    
        while (x != 0) {
            int digit = x % 10;
            x /= 10;
            if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > 7)) {
                return 0;
            }
            if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && digit < -8)) {
                return 0;
            }
            reversed = reversed * 10 + digit;
        }
        return reversed;
    }
};

int main() {
    Solution sol;  // Create instance
    int num;
    cout << "\nEnter a number to reverse: ";  // Fixed newline
    cin >> num;
    cout << "Reversed: " << sol.reverse(num) << endl;  // Use instance
    
    return 0;
}