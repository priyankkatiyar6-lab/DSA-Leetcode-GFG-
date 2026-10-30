/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/c-generic-sort/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    template <class T>
    void sortArray(vector<T>& arr) {
        // code here
        return sort(arr.begin(),arr.end());
    }
};
