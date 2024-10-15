#include<bits/stdc++.h>
using namespace std;


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
    vector<int> postorderTraversal(TreeNode* root) {
        std::vector<int> postTraversal;
        postorder(root,postTraversal);
        return postTraversal;
    }
    void postorder(TreeNode* root, std::vector<int>&postTraversal){
        if(root==nullptr){
            return ;
        }
        postorder(root->left,postTraversal);
        postorder(root->right,postTraversal);
        postTraversal.push_back(root->val);
    }
};
