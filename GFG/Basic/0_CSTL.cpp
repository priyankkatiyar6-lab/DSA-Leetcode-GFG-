/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/c-stl-set-1-vector/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

/* Inserts an element x at the back of vector A */
void add_to_vector(vector<int> &A, int x) {
    A.push_back(x);
}

/* Sorts vector A in ascending order */
void sort_vector_asc(vector<int> &A) {
    sort(A.begin(), A.end());
}

/* Reverses vector A */
void reverse_vector(vector<int> &A) {
    reverse(A.begin(), A.end());
}

/* Returns the size of vector A */
int size_of_vector(vector<int> &A) {
    return A.size();
}

/* Sorts vector A in descending order */
void sort_vector_desc(vector<int> &A) {
    sort(A.rbegin(), A.rend());
}

/* Prints space-separated elements of vector A */
void print_vector(vector<int> &A) {
    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << " ";
    }
}
