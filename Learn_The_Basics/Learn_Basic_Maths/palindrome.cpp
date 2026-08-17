// You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.



// A palindrome number is a number which reads the same both left to right and right to left.


// Example 1

// Input: n = 121

// Output: true

// Explanation: When read from left to right : 121.

// When read from right to left : 121.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int n) {
         if(n<10) return true;
         int r = 0;
         int original =n;
         while(n!=0){
            r = r*10+(n%10);
            n = n/10;
         }
         return (original==r);
    }
};

int main() {
    Solution obj;
    int n;
    cin >> n;
    cout << obj.isPalindrome(n);
    return 0;
}