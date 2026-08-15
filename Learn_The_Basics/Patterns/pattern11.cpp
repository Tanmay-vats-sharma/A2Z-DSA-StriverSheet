#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern11(int n) {
         int flag =1;
         for(int i=1;i<=n;i++){
            int copy = flag;
            for(int j=0;j<i;j++){
                
                cout << copy << " ";
                copy = !copy;
            }
            cout << endl;
            flag = !flag;
         }
    }
};

int main() {
    Solution obj;
    int n;
    cin >> n;
    obj.pattern11(n);
    return 0;
}