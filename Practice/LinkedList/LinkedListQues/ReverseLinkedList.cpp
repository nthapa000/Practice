#include<iostream>
#include<stack>

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Approach 2
class Solution {
    public:
        ListNode* reverseList(ListNode* head){
            ListNode* prev=nullptr;
            ListNode* curr=head;
            while(curr!=nullptr){
                ListNode* nextNode=curr->next;
                curr->next=prev;
                prev=curr;
                curr=nextNode;
            }
            return prev;
        }
};

// recursive 
class Solution {
    public:
        ListNode* reverseList(ListNode* head){
            // break into smaller probelm , solve for one node then go forward
            // 2->5->x
            // 5->2->x
            return reverseLinkedList(head);
        }

        ListNode* reverseLinkedList(ListNode* head){
            if(head==NULL || head->next == NULL){
                return head;
            }
            ListNode* newHead= reverseLinkedList(head->next);
            ListNode* front = head->next;
            front->next = head;
            head->next = nullptr;
            return newHead;
        }
};
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         std::stack<int> st;

//         ListNode* temp = head;
//         while(temp!=nullptr){
//             st.push(temp->val);
//             temp=temp->next;
//         }
//         temp = head;
//         while(temp!=nullptr){
//             temp->val=st.top();
//             st.pop();
//             temp=temp->next;
//         }
//         return head;
//     }
// };