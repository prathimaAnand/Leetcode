struct TreeNode{
    int val;
    TreeNode* left; // structure referring to itself
    TreeNode* right;
    TreeNode(int x): val(x), left(nullptr), right(nullptr){} //This is a constructor — a special function that runs when you create a new node.
};

#include <iostream>
#include <stack>
class solution{
    public: 
    TreeNode* invert_tree(TreeNode* root){
        if (!root) return nullptr;

        //declare a stack
        std::stack<TreeNode*> stack;
        stack.push(root);

        while(!stack.empty()){
            TreeNode* node = stack.top(); // retreives top element
            stack.pop(); // removes the element

            std::swap(node->left, node->right);
            if(node->left) stack.push(node->left); // if new left child exists, push
            if(node->right) stack.push(node->right);
        }
        return root;
    }
};

int main(){
    solution ob;
    //define a tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    TreeNode* inverted= ob.invert_tree(root);
    std::cout<<"root:" << inverted->val<<"\n";
    std::cout<<"left child:" << inverted->left->val<<"\n";
    std::cout<<"right child:" << inverted->right->val<<"\n";
    return 0;
}