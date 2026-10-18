/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/last-coin-in-a-game-of-alternates/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int coin(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        return arr[0];
    }
};
