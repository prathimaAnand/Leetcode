class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> cur;

        dfs(candidates, target, res, cur, 0);

        return res;
    }

private:
    void dfs(vector<int>& candidates, int target, vector<vector<int>>& res, vector<int>& cur, int i) {
        if (target == 0) {
            res.push_back(cur);
            return;
        }
        if (target < 0 || i >= candidates.size()) {
            return;
        }

        cur.push_back(candidates[i]);
        dfs(candidates, target - candidates[i], res, cur, i);
        cur.pop_back();
        dfs(candidates, target, res, cur, i+1);
    }
};
