class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        vector<int> sorted_nums;

        //new sorted array 排序数组
        sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());

        //get the 2 num we want from sorted array by two pointers technique
        //找到目标数字
        int i = 0;
        int j = sorted_nums.size() - 1;
        while (i < j) {
            if (sorted_nums[i] + sorted_nums[j] > target)
                j--;
            else if (sorted_nums[i] + sorted_nums[j] < target)
                i++;
            else
            {
                // find their indices in origin array 找到目标数字在原始数组中的位置
                int find_i = 0;
                int find_j = 0;
                for (int z = 0; z < nums.size(); z++)
                {
                    if (!find_i && nums[z] == sorted_nums[i]) {
                        result.push_back(z);
                        find_i = 1;
                    } else if (!find_j && nums[z] == sorted_nums[j]) {
                        result.push_back(z);
                        find_j = 1;
                    }
                    if (find_i && find_j)
                        return result;
                } 
            }    
        }
        return result;
    }
};