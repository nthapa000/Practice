// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     bool isBalanced(TreeNode* root) {
//         int leftSubTreeHeight=0;
//         if(root==nullptr){
//             return true;
//         }
//         if(root->left){
//             leftSubTreeHeight = maxHeight(root->left);
//         }
//         int rightSubTreeHeight=0;
//         if(root->right){
//             rightSubTreeHeight = maxHeight(root->right);
//         }
//         int diff = abs(leftSubTreeHeight-rightSubTreeHeight);
//         if(diff<=1){
//             return true;
//         }else{
//             return false;
//         }
//     }

//     int maxHeight(TreeNode* root) {
//        return dfs(root);
//     }
//     int dfs(TreeNode* root){
//        if(root ==nullptr){
//            return 0;
//        }
//        int leftDepth=dfs(root->right);
//        int rightDepth=dfs(root->left);


//        return 1+max(leftDepth,rightDepth);
//    }
// };

class Solution {
public:
    int depth (TreeNode *root) {
        if (root == NULL) return 0;
        return max (depth(root -> left), depth (root -> right)) + 1;
    }

    bool isBalanced (TreeNode *root) {
        if (root == NULL) return true;
        
        int left=depth(root->left);
        int right=depth(root->right);
        
        return abs(left - right) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }
};

class solution {
public:
int dfsHeight (TreeNode *root) {
        if (root == NULL) return 0;
        
        int leftHeight = dfsHeight (root -> left);
        if (leftHeight == -1) return -1;
        int rightHeight = dfsHeight (root -> right);
        if (rightHeight == -1) return -1;
        
        if (abs(leftHeight - rightHeight) > 1)  return -1;
        return max (leftHeight, rightHeight) + 1;
    }
    bool isBalanced(TreeNode *root) {
        return dfsHeight (root) != -1;
    }
};