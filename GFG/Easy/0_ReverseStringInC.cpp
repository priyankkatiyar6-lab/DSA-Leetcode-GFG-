/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/reverse-string-in-c/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

void reverseString(char str[]) {
    // code here
    int n = strlen(str);
    for(int i = n-1 ; i >= 0 ; i--){
        printf("%c" , str[i]);
    }
}
