/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/product-of-array-element/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int product(vector<int> &arr) {
        // code here
        int mod = 1000000007;
        int res = 1;
        for(int i : arr){
            res = (1LL * res * i)%mod ;
        }
        return res;
    }
};
