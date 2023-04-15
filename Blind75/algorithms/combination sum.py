"""
Trick: Use recursion tree instead of brut forcing using decision tree
Using a tree that do not have duplicates
We use recursion tree with 2 decisions
1 decision including 1st digit and 2nd everything else but not 1st digit
Time - O(2^T)


"""
class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        res = []
        def dfs(i, cur, total):
            if total == target:
                res.append(cur.copy())
                return
            if i>= len(candidates) or total > target:
                return
            
            cur.append(candidates[i])
            dfs(i, cur, total + candidates[i] )
            cur.pop()
            dfs(i + 1, cur, total)

        dfs(0, [], 0)
        return res
        
