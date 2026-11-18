/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/at-least-two-greater-elements4625/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findElements(vector<int> arr) {
        // code here
        sort(arr.begin(),arr.end());
        int n = arr.size();
        vector<int> res;
        for(int i = 0 ; i< n-2 ; i++){
            res.push_back(arr[i]);
        }
        return res;
    }
};
