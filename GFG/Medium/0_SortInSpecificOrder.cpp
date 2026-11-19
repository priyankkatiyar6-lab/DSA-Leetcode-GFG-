/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/sort-in-specific-order2422/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    void sortIt(vector<int>& arr) {
        vector<int>A;
        vector<int>B;

        for(int i = 0; i < arr.size(); i++){
            if(arr[i] % 2 != 0){
                A.push_back(arr[i]);
            }
            else{
                B.push_back(arr[i]);
            }
        }

        sort(A.begin(), A.end(), greater<int>());
        sort(B.begin(), B.end());

        arr.clear();

        for(int i = 0; i < A.size(); i++){
            arr.push_back(A[i]);
        }

        for(int i = 0; i < B.size(); i++){
            arr.push_back(B[i]);
        }
    }
};

