/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/index-of-first-1-in-a-sorted-array-of-0s-and-1s4048/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int firstIndex(vector<int> &arr) {
        // code here
        for(int i = 0 ; i < arr.size() ; i++){
            if(arr[i]==1){
                return i;
            }
          
        }
        return -1;
        
    }
};
