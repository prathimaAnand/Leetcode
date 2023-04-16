/*
Trick: Use recursion tree instead of brut forcing using decision tree
Using a tree that do not have duplicates
We use recursion tree with 2 decisions
1 decision including 1st digit and 2nd everything else but not 1st digit
Time - O(2^T)
*/
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
