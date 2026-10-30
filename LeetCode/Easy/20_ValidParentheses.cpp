/**
 * Problem Link : https://leetcode.com/problems/valid-parentheses/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
         stack <char>st;
        for(char c : s){
            if( c == '(' || c == '[' || c == '{'){
                st.push(c);
            }
            else {
                if (st.size()==0){
                    return false;
                }
                if(st.top()=='(' && c ==')' || st.top()=='{' && c =='}' || st.top()=='[' && c ==']' ){
                    st.pop();
                   // return true;
                }
                else{
                    return false;
                }
            }
        }
        return st .empty();
        
    }
};
