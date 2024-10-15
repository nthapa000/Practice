#include<vector>
#include<queue>

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
        std::vector<std::vector<int>> levelOrder(TreeNode* root) {
        std::vector<std::vector<int>> ans;
        if(root==NULL){
            return ans;
        }
        std::queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            // current queue size
            int size = q.size();
            std::vector<int> currLevel;
            for(int i=0;i<size;i++){
                TreeNode *node = q.front();
                q.pop();
                if(node->left !=NULL) q.push(node->left);
                if(node->right !=NULL) q.push(node->right);
                currLevel.push_back(node->val);
            }
            ans.push_back(currLevel);
        }
        return ans;
    }
};

class Solution {
public:
    std::vector<std::vector<int>> answer;
    void DFS_levelorder(TreeNode* root,int level) 
    {
        if(!root) return;  //if root is NULL then return
        if(level==answer.size())  //if level is equal to answer size then we have to push one empty element into it
            answer.push_back(std::vector<int> ());  //pushing extra element to accomodate next level nodes
        answer[level].push_back(root->val);  //pushing current node to the level index of answer
        DFS_levelorder(root->left,level+1);  //recursive call to traverse left subtree by increasing the level order
        DFS_levelorder(root->right,level+1);  //recursive call to traverse right subtree by increasing the level order
    }
    std::vector<std::vector<int>> levelOrder(TreeNode* root) {
        DFS_levelorder(root,0);  //calling function to traverse whole tree by passing root and level order
        return answer;  
    }
};