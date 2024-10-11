#include<iostream>

struct Node{
    int data;
    Node* next;
    Node(int x){data=x; next=nullptr;}
};

class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, struct Node* head, int key) {
        // Code here
        Node* temp = head;
        // if(head==nullptr){
        //     return false;
        // }
        while(temp!=NULL){
            if(temp->data==key){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }
};

int main(){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;

        int data;
        std::cin>>data;

        struct Node *head = new Node(data);
        struct Node *tail = head;

        for(int i=0;i<n-1;i++){
            std::cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }

        int key;
        std::cin>>key;
        Solution ob;
        std::cout<<ob.searchKey(n,head,key)<<std::endl;
    }
    return 0;
}