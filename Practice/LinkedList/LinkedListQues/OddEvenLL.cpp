
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }

        ListNode* evenHead=head->next;
        ListNode* odd=head;
        ListNode* even=evenHead;
        
        while(even!=nullptr && even->next!=nullptr){
            odd->next=odd->next->next;
            even->next=even->next->next;
            odd=odd->next->next;
            even=even->next->next;
        }
        odd->next=evenHead;
        return head;
    }
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }

        ListNode* evenHead=head->next;
        ListNode* odd=head;
        ListNode* even=evenHead;
        
        while(even!=nullptr && even->next!=nullptr){
            odd->next=odd->next->next;
            even->next=even->next->next;
            odd=odd->next;
            even=even->next;
        }
        odd->next=evenHead;
        return head;
    }
};