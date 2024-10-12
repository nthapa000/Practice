#include<iostream>
#include<vector>

class Node{
    public:
        Node* prev;
        int data;
        Node* next;

        Node(){
            prev=NULL;
            data=0;
            next=NULL;
        }

        Node(int value){
            prev=NULL;
            data=value;
            next=NULL;
        } 
};

class Solution {
  public:
    Node* constructDLL(std::vector<int>& arr) {
        // code here
        Node* head = new Node(arr[0]);
        Node* temp = head;
        int lengthLL = arr.size();
        for(int i=1;i<lengthLL;i++){
            Node* curr = new Node(arr[i]);
            temp->next=curr;
            curr->prev=temp; 
            temp = temp->next;

        }
    return head;
    }

    void printLL(Node* head) {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main(){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        std::vector<int> arr(n);
        for(int i=0;i<n;i++){
            std::cin>>arr[i];
        }
        Solution obj;
        Node* ans= obj.constructDLL(arr);
        obj.printLL(ans);
    }
}