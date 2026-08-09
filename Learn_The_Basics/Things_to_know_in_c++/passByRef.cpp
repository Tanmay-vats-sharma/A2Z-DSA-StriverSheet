// Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.


// Example 1

// Input: n=5, arr = [1,2,3,4,5]

// Output: [5,4,3,2,1]

// Explanation: The reverse of the array [1,2,3,4,5] is [5,4,3,2,1]

// Example 2

// Input: n=6, arr = [1,2,1,1,5,1]

// Output: [1,5,1,1,2,1]

// Explanation: The reverse of the array [1,2,1,1,5,1] is [1,5,1,1,2,1].

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void reverse(vector<int>& arr){
        int n= arr.size();
        int l=0;
        int r=n-1;
        while(l<r){
            int temp=arr[l];
            arr[l]=arr[r];
            arr[r]=temp;
            l++;
            r--;
        }
        for(int i=0;i<n;i++){
            cout << arr[i] << " ";
        }    
    }
};

int main(){
    Solution obj;
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    obj.reverse(arr);
}