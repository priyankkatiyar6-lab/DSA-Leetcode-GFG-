/**
 * Problem Link : https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-ii/
 * Platform     : LeetCode
 * Difficulty   : Hard
 */

#include <bits/stdc++.h>
using namespace std;


class Solution {
    static const int MOD = 1e9 + 7;
    
    struct Node {
        long long sum;      // Sum of distinct counts
        long long sq_sum;   // Sum of squares of distinct counts
        long long lazy;     // Lazy propagation tag
    };

    int n;
    vector<Node> tree;

    void push(int node, int l, int r) {
        if (tree[node].lazy != 0) {
            long long val = tree[node].lazy;
            int mid = (l + r) / 2;
            
            // Left child
            long long lenL = (mid - l + 1);
            tree[2 * node].sq_sum = (tree[2 * node].sq_sum + 2 * val * tree[2 * node].sum + val * val * lenL) % MOD;
            tree[2 * node].sum = (tree[2 * node].sum + val * lenL) % MOD;
            tree[2 * node].lazy = (tree[2 * node].lazy + val) % MOD;

            // Right child
            long long lenR = (r - mid);
            tree[2 * node + 1].sq_sum = (tree[2 * node + 1].sq_sum + 2 * val * tree[2 * node + 1].sum + val * val * lenR) % MOD;
            tree[2 * node + 1].sum = (tree[2 * node + 1].sum + val * lenR) % MOD;
            tree[2 * node + 1].lazy = (tree[2 * node + 1].lazy + val) % MOD;

            tree[node].lazy = 0;
        }
    }

    void update(int node, int l, int r, int ql, int qr, long long val) {
        if (ql > r || qr < l) return;
        if (ql <= l && r <= qr) {
            long long len = (r - l + 1);
            tree[node].sq_sum = (tree[node].sq_sum + 2 * val * tree[node].sum + val * val * len) % MOD;
            tree[node].sum = (tree[node].sum + val * len) % MOD;
            tree[node].lazy = (tree[node].lazy + val) % MOD;
            return;
        }
        push(node, l, r);
        int mid = (l + r) / 2;
        update(2 * node, l, mid, ql, qr, val);
        update(2 * node + 1, mid + 1, r, ql, qr, val);
        tree[node].sum = (tree[2 * node].sum + tree[2 * node + 1].sum) % MOD;
        tree[node].sq_sum = (tree[2 * node].sq_sum + tree[2 * node + 1].sq_sum) % MOD;
    }

public:
    int sumCounts(vector<int>& nums) {
        n = nums.size();
        tree.assign(4 * n, {0, 0, 0});
        
        // Coordinate compression or hash map for last seen indices
        // Since values can be up to 10^5, a fixed array works well.
        vector<int> last(100005, -1);
        long long total_sum = 0;
        long long current_ans = 0;

        for (int j = 0; j < n; ++j) {
            int l = last[nums[j]] + 1;
            int r = j;
            
            // Update range [l, r] by adding 1 to distinct counts
            update(1, 0, n - 1, l, r, 1);
            last[nums[j]] = j;

            // tree[1].sq_sum now holds the sum of squares of all subarrays ending at j
            current_ans = (current_ans + tree[1].sq_sum) % MOD;
        }

        return current_ans;
    }
};
