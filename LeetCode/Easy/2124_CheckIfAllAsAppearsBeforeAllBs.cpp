/**
 * Problem Link : https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkString(string s) {
        int b = s.find('b');

        for(int i = b + 1; i < s.size(); i++) {
            if(s[i] == 'a') {
                return false;
            }
        }

        return true;
    }
};
