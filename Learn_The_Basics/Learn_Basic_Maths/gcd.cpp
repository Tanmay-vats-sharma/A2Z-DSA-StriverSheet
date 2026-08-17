// You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.



// The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.


// Example 1

// Input: n1 = 4, n2 = 6

// Output: 2

// Explanation: Divisors of n1 = 1, 2, 4, Divisors of n2 = 1, 2, 3, 6

// Greatest Common divisor = 2.

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int GCD(int n1,int n2) {
        int gcd=1;
        for(int i=1;i<=n1;i++){
           if(n1%i==0&&n2%i==0){gcd=i;}
        }
        return gcd;
    }
};

int main() {
    Solution obj;
    int n1,n2;
    cin >> n1 >> n2;
    cout << obj.GCD(n1,n2);
    return 0;
}