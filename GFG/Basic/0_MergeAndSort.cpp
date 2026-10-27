/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/merge-and-sort5821/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> mergeNsort(vector<int>& arr1, vector<int>& arr2) {
        //  code here
        set<int>s;
        for(int n :arr1){
            s.insert(n);
        }
        for(int i :arr2){
            s.insert(i);
        }
        vector<int>res(s.begin(),s.end());
        return res;
    }
};
