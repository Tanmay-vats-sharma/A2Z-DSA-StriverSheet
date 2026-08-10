// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



// 12345

// 1234

// 123

// 12

// 1



// Print the pattern in the function given to you.


#include <iostream>
using namespace std;

class Solution {
public:
    void pattern6(int n) {
        for(int i=n;i>0;i--){
            for(int j=0;j<i;j++){
                cout << j+1;
            }
            cout << endl;
        }
    }
};

void main() {
    Solution obj;
    int n;
    cin >> n;
    obj.pattern6(n);
}