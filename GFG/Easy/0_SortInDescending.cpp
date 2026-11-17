/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/sort-in-descending--141631/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void sortInDesc(vector<int>& arr) {
        // code here
        
        return sort(arr.begin(),arr.end(),greater<int>());
    }
};
