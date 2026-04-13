#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (num < 0) return false;
    
    int original = x;
    int reversed = 0;
    
    while (x > 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    
    return original == reversed;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    if (isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }
    
    return 0;
}