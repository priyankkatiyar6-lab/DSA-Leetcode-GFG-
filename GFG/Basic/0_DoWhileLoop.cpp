/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/do-while-loop/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <iostream>
using namespace std;

class Solution {
  public:
    void printGeeks(int n) {
        // code here
        do{
            cout<<"Geeksforgeeks" << endl;
            n--;
        }while(n>0);
    }
};
