/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/min-cost-climbing-stairs/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

//Back-end complete function Template for C++

class Solution {
  public:
    int minCostClimbingStairs(vector<int>& cost) {
        // Write your code here
        int n = cost.size();
              if(n==0||n==1){
                  return 0;
              }
              for(int i =2 ; i < n ; i++){
                 cost[i]+= min(cost[i-1],cost[i-2]);
              }
             return min(cost[n-1],cost[n-2]);
    }
};
