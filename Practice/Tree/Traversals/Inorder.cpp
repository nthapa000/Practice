#include<vector>
//   Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
    std::vector<int> inorderTraversal(TreeNode* root) {
        std::vector<int> inTraversal;
        inorder(root,inTraversal);
        return inTraversal;
    }
    void inorder(TreeNode* root, std::vector<int>&inTraversal){
        if(root==nullptr){
            return ;
        }
        inorder(root->left,inTraversal);
        inTraversal.push_back(root->val);
        inorder(root->right,inTraversal);
    }
};

// Iterative
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> stack;
        TreeNode* curr = root;
        while (curr != NULL || !stack.empty()) {
            while (curr != NULL) {
                stack.push(curr);
                curr = curr->left;
            }
            curr = stack.top();
            stack.pop();
            res.push_back(curr->val);
            curr = curr->right;
        }
        return res;
    }
};