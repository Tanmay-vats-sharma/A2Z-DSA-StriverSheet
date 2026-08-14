// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA


// Print the pattern in the function given to you.

#include<iostream>
using namespace std;

class Solution {
public:
    void pattern17(int n) {
         for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                cout << " ";
            } 
            for(int k=0;k<i;k++){
                cout << char(65+k);
            }
            for(int l=i;l>1;l--){
                cout << char(65+l-2);
            }
            cout << endl;
         }
    }
};

int main() {
    Solution obj;
    int n;
    cin >> n;
    obj.pattern17(n);
    return 0;
}