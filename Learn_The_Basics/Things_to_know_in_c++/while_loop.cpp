// Given a digit d (0 to 9), find the sum of the first 50 positive integers (integers > 0) that end with digit d.



// A number ends with digit d if its last digit is d.


// Example 1

// Input: d = 1

// Output: 12300

// Explanation:

// The first 50 positive integers ending with 1 are: 1, 11, 21, 31, ..., 491

// Their sum is 12300.

// Example 2

// Input: d = 5

// Output: 12500

#include <iostream>
using namespace std;

class Solution {
    public:
    int whileLoop(int d) {
        int sum=0;
        int count=50;
        while(count > 0){
           sum+=d;
           count--;
           d+=10;
        }
        return sum;
    }
};

int main() {
    Solution obj;
    int d;
    cin >> d;
    cout << obj.whileLoop(d);
    return 0;
}