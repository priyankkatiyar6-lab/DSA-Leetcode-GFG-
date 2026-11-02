/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/display-longest-name0853/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string longest(vector<string>& arr) {
        // code here
        string longestWord = arr[0];

                for (int i = 1; i < arr.size(); i++) {
                    if (arr[i].length() > longestWord.length()) {
                        longestWord = arr[i];
                    }
                }

                return longestWord;
    }
};

