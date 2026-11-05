/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/game-with-nos3123/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> xorArray(vector<int>& arr) {
        // code here
        int n = arr.size();
        // vector<int> res;
        for(int i = 0 ; i < n - 1 ; i++){
            arr[i] = arr[i] xor arr[i+1];
        }
        return arr;
    }
};
