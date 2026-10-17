/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/perfect-arrays4645/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPalindrome(vector<int> &arr) {
        // code here
        vector<int>arr2 = arr;
        reverse(arr2.begin(), arr2.end());
        for(int i = 0; i < arr.size(); i++){
            if(arr[i]!=arr2[i]){
                return false;
            }
            
        }
        return true;
    }
};

