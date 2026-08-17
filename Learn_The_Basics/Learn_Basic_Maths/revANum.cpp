// You are given an integer n. Return the integer formed by placing the digits of n in reverse order.


// Example 1

// Input: n = 25

// Output: 52

// Explanation: Reverse of 25 is 52.

// Example 2

// Input: n = 123

// Output: 321

// Explanation: Reverse of 123 is 321.

#include<iostream>
using namespace std;

class Solution {
public:
    int reverseNumber(int n) {
        if(n==0) return 0;
        int r=0;
        while(n!=0){
            r=r*10+(n%10);
            n=n/10;
        }
        return r;
    }
};

int main() {
    Solution obj;
    int n;
    cin >> n;
    cout << obj.reverseNumber(n);
    return 0;
}