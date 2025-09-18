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
    int kthSmallest(TreeNode* root, int k) {
        TreeNode* cur_node = root;
        int n_node = 0;
        // iterative approach
        stack<TreeNode*> my_stack;
        while(!my_stack.empty() || cur_node){
            while (cur_node) {
                my_stack.push(cur_node); // push root
                cur_node = cur_node->left; // assign left node
            }
            cur_node = my_stack.top(); // get top of stack
            my_stack.pop();
            n_node += 1;
            if (n_node == k) {
                return cur_node->val;
            }
            // check right node
            cur_node = cur_node->right;
        }
        return -1;
    }
};
