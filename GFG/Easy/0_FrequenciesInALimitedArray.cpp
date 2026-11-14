/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> res(n,0);
        for(int i =0 ; i< n ; i++){
            res[arr[i]-1]++;
        }
        return res;
        
    }
};

