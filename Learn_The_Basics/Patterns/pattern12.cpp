// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321


// Print the pattern in the function given to you.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern12(int n) {
         for(int i=1;i<=n;i++){
             for(int j=0;j<i;j++){
                cout << j+1;
             }
             for(int k=0;k<n*2-i*2;k++){
                cout << " ";
             }
             for(int l=i;l>0;l--){
                cout << l;
             }
             cout << endl;
         }
         
    }
};

int main() {
    Solution obj;
    int n;
    cin >> n;
    obj.pattern12(n);
    return 0;
}