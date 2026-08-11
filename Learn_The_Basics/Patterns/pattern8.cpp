// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



// *********
//  *******
//   *****
//    ***
//     *


// Print the pattern in the function given to you.

#include <iostream>
using namespace std;

class Solution {
public:
    void pattern8(int n) {
         for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                cout << " ";
            }
            for(int k=0;k<n*2-i*2-1;k++){
                cout << "*";
            }
            for(int j=0;j<i;j++){
                cout << "";
            }
            cout << endl;
         }
    }
};

int main() {
    Solution obj;
    int n;
    cin >> n;
    obj.pattern8(n);
    return 0;
}