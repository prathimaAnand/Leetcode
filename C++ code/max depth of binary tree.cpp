# link: https://leetcode.com/problems/maximum-depth-of-binary-tree/submissions/921024821/

/*
Three ways to solve
1. RECURSIVE DFS


*/
// 1. RECURSIVE DFS

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root ==0)
            return 0;

        int max_val = 1 + max(maxDepth(root->left), maxDepth(root->right));
        return max_val;

    }
};
