class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        // base case for recurrsion
        if (nums.empty()) return {{}};

        // take sum nums
        vector<int> temp(nums.begin() + 1, nums.end()); // construct temp from 2nd value in nums
        // get all permutation for temp eg [2,3]; perms = [[2,3], [3,2]]
        vector<vector<int>> perms = permute(temp); 
        vector<vector<int>> result;

        for (auto& p : perms) {
            for (int i = 0; i <= p.size(); i ++) {
                vector<int> p_copy = p; // to not modify actual
                p_copy.insert(p_copy.begin() + i, nums[0]);
                result.push_back(p_copy);
            }
        }
        return result;
    }
};