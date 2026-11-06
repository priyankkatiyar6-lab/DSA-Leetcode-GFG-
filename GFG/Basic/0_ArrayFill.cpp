/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/vector-fill/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void fillArray(vector<int> &arr, int k) {
        // code here
        for(int i = 0; i < arr.size(); i++) {
                   arr[i] = k;
        }
    }
};
