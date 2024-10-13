#include<iostream>

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        // Find the length of LL
        int length=lengthLL(head);
        int mid = length/2 +1;
        return traverse(head,mid);
    }
private:
    int lengthLL(ListNode* head){
        ListNode* temp = head;
        int count = 0;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        return count;
    }

    ListNode* traverse(ListNode* head, int pos){
        ListNode* temp = head;
        int count=1;
        while(temp!=nullptr && count!=pos){
            count++;
            temp=temp->next;
        }
        return temp;
    }
};

// Method 2
ListNode* middleNode(ListNode* head) {
        // Find the length of LL
        ListNode* singleStep = head;
        ListNode* doubleStep = head;
        while(doubleStep!=nullptr && doubleStep->next!=nullptr){
            singleStep=singleStep->next;
            doubleStep=doubleStep->next->next;
        }
        return singleStep;
    }