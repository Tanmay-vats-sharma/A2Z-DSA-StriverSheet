// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



// *

// **

// ***

// ****

// *****

// ****

// ***

// **

// *



// Print the pattern in the function given to you.

#include <iostream>
using namespace std;
class Solution {
public:
    void pattern10(int n) {
         for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                cout << "*";
            }
            cout << endl;
         }
         for(int i=n-1;i>=1;i--){
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
    obj.pattern10(n);
    return 0;
}

