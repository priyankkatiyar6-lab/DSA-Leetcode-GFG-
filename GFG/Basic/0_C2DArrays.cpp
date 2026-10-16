/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/c-2-d-arrays0708/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose(int a[][M], int n) {
   vector<vector<int>> ans(n, vector<int>(n));

      for (int i = 0; i < n; i++) {
          for (int j = 0; j < n; j++) {
              ans[j][i] = a[i][j];
          }
      }

      return ans;
    
}

