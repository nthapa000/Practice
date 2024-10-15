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
    // Helper function to collect leaf nodes
    void leaf(TreeNode* root, vector<int>& temp) {
        if (root == NULL) return;
        if (root->left == NULL && root->right == NULL) temp.push_back(root->val); // Leaf node
        leaf(root->left, temp);
        leaf(root->right, temp);
    }

    // Main function to check if trees are leaf-similar
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> left, right;
        leaf(root1, left);  // Collect leaf nodes from root1
        leaf(root2, right); // Collect leaf nodes from root2
        return left == right; // Compare the leaf sequences
    }
};

class Solution {
public:
    int ans=0;
    int pathSum(TreeNode* root, int sum) {
        if(root){
            dfs(root,sum);
            pathSum(root->left,sum);
            pathSum(root->right,sum);
        }
        return ans;
    }
    void dfs(TreeNode* root, int sum){
        if(!root)return;
        if(root->val==sum)ans++;
        dfs(root->left,sum-root->val);
        dfs(root->right,sum-root->val);
    }
};