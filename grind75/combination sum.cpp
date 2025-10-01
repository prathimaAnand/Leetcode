class Solution {
public:
    vector<vector<int>> result;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        // same number can be chosen unlimited times
        // unique when one number is different
        // skipping combinations that is already used
        vector<int> cur;
        dfs(candidates, 0, cur, 0, target);
        return result;
    }
    void dfs(vector<int>& candidates, int i, vector<int>& cur, int sum, int target) {
        if (i >= candidates.size() || sum > target) {
            return;
        }
        if (sum == target) {
            result.push_back(cur);
            return;
        }

        cur.push_back(candidates[i]);
        dfs(candidates, i, cur, sum + candidates[i], target);
        cur.pop_back();
        dfs(candidates, i + 1, cur, sum, target);
    }
};