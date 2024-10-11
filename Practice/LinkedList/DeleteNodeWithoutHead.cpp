// // https://leetcode.com/problems/delete-node-in-a-linked-list/

// #include<iostream>
// //   Definition for singly-linked list.
//   struct ListNode {
//       int val;
//       ListNode *next;
//       ListNode(int x) : val(x), next(NULL) {}
//   };


// class Solution {
// public:
//     void deleteNode(ListNode* node) {
//         ListNode* temp = node;
//         ListNode* curr=node;
//         while(temp->next!=nullptr){
//             temp->val = temp->next->val;
//             curr=temp;
//             temp=temp->next;
//         }
//         curr->next=nullptr;
//     }
// };

// // Approach 2:
// class Solution {
// public:
//     void deleteNode(ListNode* node) {
//         // Overwrite data of next node on current node.
//         node->val = node->next->val;
//         // Make current node point to next of next node.
//         node->next = node->next->next;
//     }
// };

// full code
#include <iostream>
#include<vector>

// Definition for singly-linked list node.
struct ListNode {
    int val;
    ListNode* next;
    
    ListNode(int x) : val(x), next(nullptr) {}
};

// Solution class containing the deleteNode function.
class Solution {
public:
    void deleteNode(ListNode* node) {
        // Check if node or the next node is null (although the problem assumes it's not)
        if (node == nullptr || node->next == nullptr) {
            std::cerr << "Invalid node to delete." << std::endl;
            return;
        }

        // Overwrite current node's value with the value of the next node.
        ListNode* temp = node->next;
        node->val = temp->val;

        // Bypass the next node by pointing to the next of the next node.
        node->next = temp->next;

        // Delete the bypassed node to free memory.
        delete temp;
    }
};

// Helper function to print the linked list.
void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        std::cout << temp->val << " -> ";
        temp = temp->next;
    }
    std::cout << "nullptr" << std::endl;
}

// Helper function to create a linked list from a vector.
ListNode* createList(const std::vector<int>& values) {
    if (values.empty()) return nullptr;

    ListNode* head = new ListNode(values[0]);
    ListNode* temp = head;
    for (size_t i = 1; i < values.size(); ++i) {
        temp->next = new ListNode(values[i]);
        temp = temp->next;
    }
    return head;
}

// Main function to test deleteNode.
int main() {
    // Creating a linked list: 4 -> 5 -> 1 -> 9
    std::vector<int> values = {4, 5, 1, 9};
    ListNode* head = createList(values);
    
    std::cout << "Original list: ";
    printList(head);

    // Deleting node with value 5 (node 5 will be deleted, resulting in 4 -> 1 -> 9)
    Solution solution;
    ListNode* nodeToDelete = head->next; // Pointer to node with value 5
    solution.deleteNode(nodeToDelete);

    std::cout << "List after deleting node with value 5: ";
    printList(head);

    return 0;
}
