struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=right=nullptr;
    }
};

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
}

//User function Template for C++

struct node {
  int data;
  struct node *left;
  struct node *right;
};

struct node *newNode(int data) {
  struct node *node = (struct node *)malloc(sizeof(struct node));

  node->data = data;

  node->left = NULL;
  node->right = NULL;
  return (node);

class Solution{
public:

    node* solve(vector<int> &vec,int root_index){
        if(root_index>=vec.size()){
            return NULL;
        }
        struct node *root=newNode(vec[root_index]);
        root->left=solve(vec,(root_index*2)+1);
        root->right=solve(vec,(root_index*2)+2);
        return root;
    }
    
    void create_tree(node* &root0, vector<int> &vec){
        //Your code goes here
        root0=solve(vec,0);
    }

};


    void create_tree(node* root0, vector<int> &vec){
        //Your code goes here
        queue<pair<node*,int>> q;
        q.push({root0,0});
        int n=vec.size();
        
        while(!q.empty()){
            node* temp = q.front().first;
            int i = q.front().second;
            q.pop();
            
            if(2*i+1<n){
                temp->left = newNode(vec[2*i+1]);
                q.push({temp->left,2*i+1});
            }
            
            if(2*i+2<n){
                temp->right = newNode(vec[2*i+2]);
                q.push({temp->right,2*i+2});
            }
        }
    }