// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********


// Print the pattern in the function given to you.


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern19(int n) {
         for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                cout << "*";
            }
            for(int k=0;k<i*2;k++){
                cout << " ";
            }
            for(int j=i;j<n;j++){
                cout << "*";
            }
            cout << endl;
         }
         for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                cout << "*";
            }
            for(int k=i*2;k<n*2;k++){
                cout << " ";
            }
            for(int j=0;j<i;j++){
                cout << "*";
            }
            cout << endl;
         }
        
    }
};

int main() {
    Solution obj;
    int n;
    cin >> n;
    obj.pattern19(n);
    return 0;
}