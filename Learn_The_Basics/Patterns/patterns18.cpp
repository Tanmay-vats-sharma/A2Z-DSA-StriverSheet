// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



// E 

// D E 

// C D E 

// B C D E 

// A B C D E



// Print the pattern in the function given to you.

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern18(int n) {
         int a =n;
         for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                cout << char(65+a-i+j)<<" ";
            }
            cout << endl;
         }
    }
};

int main() {
    Solution obj;
    int n;
    cin >> n;
    obj.pattern18(n);
    return 0;
}