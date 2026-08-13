// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



// A

// AB

// ABC

// ABCD

// ABCDE



// Print the pattern in the function given to you.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern14(int n) {
         for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                cout << char(65+j);
            }
            cout << endl;
         }
    }
};

int main() {
    Solution obj;
    int n;
    cin >> n;
    obj.pattern14(n);
    return 0;
}