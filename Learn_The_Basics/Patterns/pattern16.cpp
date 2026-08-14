// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



// A

// BB

// CCC

// DDDD

// EEEEE



// Print the pattern in the function given to you.

#include<iostream>
using namespace std;

class Solution {
public:
    void pattern16(int n) {
         for(int i=0;i<n;i++){
            for(int j=-1;j<i;j++){
                cout << char(65+i);
            }
            cout << endl;
         }
    }
};

int main() {
    Solution obj;
    int n;
    cin >> n;
    obj.pattern16(n);
    return 0;
}