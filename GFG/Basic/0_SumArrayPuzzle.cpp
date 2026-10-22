/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/sum-array-puzzle/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void sumArray(vector<int> &arr) {
        // code here
        int sum = 0;
        for(int i : arr){
            sum = sum + i ;
        }
        for(int i = 0 ; i <arr.size() ; i++){
            arr[i] = sum - arr[i];
        }
    }
};
