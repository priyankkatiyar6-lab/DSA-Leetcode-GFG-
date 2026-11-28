/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/input-boolean-value/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <iostream>
using namespace std;

int main() {
    string s;
        if (cin >> s) {
            if (s == "true" || s == "1") {
                cout << 1;
            } else {
                cout << 0;
            }
        }

    return 0;
}
