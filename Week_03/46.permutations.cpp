/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        backtrack(res, nums, 0, (int)nums.size());
        return res;
    }
    void backtrack(vector<vector<int>> &res, vector<int> &nums, int start, int len) {
        if (start == len) {
            res.push_back(nums);
            return;
        }
        for (int i = start; i < len; i++) {
            swap(nums[i], nums[start]);
            backtrack(res, nums, start + 1, len);
            swap(nums[i],nums[start]);
        }
    }
};
// @lc code=end

