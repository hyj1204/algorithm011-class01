/*
 * @lc app=leetcode id=77 lang=cpp
 *
 * [77] Combinations
 */

// @lc code=start

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        if (k <= 0 || n <= 0) return res;
        vector<int> ans;
        backtrack(n,k,1,ans);
        return res;               
    }
    void backtrack(int n, int k, int start, vector<int> &ans) {
        // terminal
        if (ans.size() == k) {
            res.push_back(ans);
            return;
        }
        for (int i = start; i <= n; i++) {
            ans.push_back(i);
            backtrack(n,k, i+1, ans);
            ans.pop_back();
        }
    }
private:
    vector<vector<int>> res;
};
// @lc code=end

