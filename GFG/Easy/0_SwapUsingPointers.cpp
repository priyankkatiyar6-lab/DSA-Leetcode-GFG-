/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/magic-in-cpp--120640/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void swap(int *a, int *b) {
        // code here
        *a = *a+*b;
        *b = *a-*b;
        *a = *a-*b;
        
    }
};
