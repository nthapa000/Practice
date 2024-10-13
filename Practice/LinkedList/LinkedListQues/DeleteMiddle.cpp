struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    public:
        ListNode* deleteMiddle(ListNode* head) {
            if(head==nullptr){
                return nullptr;
            }
            if(head->next==nullptr){
                delete head;
                return nullptr;
            }

            // Finding the middle by tortoise and hare method
            ListNode* slow=head;
            ListNode* fast=head;
            ListNode* beforeSlow=head;
            while(fast!=nullptr && fast->next!=nullptr){
                if(slow!=head) {
                    beforeSlow=beforeSlow->next;
                }
                slow=slow->next;
                fast=fast->next->next;;
            }
            // slow is the middle
            beforeSlow->next=slow->next;
            delete slow;
            return head;   
        }
};