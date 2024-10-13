#include<iostream>
#include<vector>
#include<unordered_map>

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){}
};

class Solution {
    public:
        bool hasCycle(ListNode* head){
            ListNode* temp = head;
            std::unordered_map<ListNode*,int> nodeMap;

            while (temp!=nullptr)
            {
                if(nodeMap.find(temp)!= nodeMap.end()){
                    return true;
                }
                nodeMap[temp]=1;
                temp=temp->next;
            }
            return false;
        }
};

// class Solution {
//     public:
//         bool hasCycle(ListNode* head){
//             ListNode* slow= head;
//             ListNode* fast= head;
//             while(fast!=nullptr && fast->next!=nullptr){
                
//                 slow=slow->next;
//                 fast=fast->next->next;
//                 if(fast==slow){
//                     return true;
//                 }
//             }
//             return false;
//         }
// };

// //Version 2
// #include <iostream>
// #include <vector>

// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

// class Solution {
// public:
//     // Function to check if the linked list has a cycle
//     bool hasCycle(ListNode* head) {
//         // Edge case: If the list is empty or has only one node, no cycle is possible
//         if (head == nullptr || head->next == nullptr) {
//             return false;
//         }

//         ListNode* slow = head;
//         ListNode* fast = head;

//         // Traverse the list with two pointers (slow and fast)
//         while (fast != nullptr && fast->next != nullptr) {
//             slow = slow->next;           // Move slow by one step
//             fast = fast->next->next;     // Move fast by two steps

//             // If the slow and fast pointers meet, there is a cycle
//             if (slow == fast) {
//                 return true;
//             }
//         }

//         // If we exit the loop, there is no cycle
//         return false;
//     }
// };

// // Helper function to create a linked list from a vector
// ListNode* createLinkedList(const std::vector<int>& values) {
//     if (values.empty()) return nullptr;
    
//     ListNode* head = new ListNode(values[0]);
//     ListNode* current = head;
//     for (size_t i = 1; i < values.size(); ++i) {
//         current->next = new ListNode(values[i]);
//         current = current->next;
//     }
//     return head;
// }

// // Helper function to print a linked list (for testing purposes, no cycles)
// void printList(ListNode* head) {
//     ListNode* temp = head;
//     while (temp != nullptr) {
//         std::cout << temp->val << " -> ";
//         temp = temp->next;
//     }
//     std::cout << "nullptr" << std::endl;
// }

// // Main function to test the solution
// int main() {
//     // Create a linked list: 3 -> 2 -> 0 -> -4
//     std::vector<int> values = {3, 2, 0, -4};
//     ListNode* head = createLinkedList(values);

//     // Introduce a cycle for testing (2 -> 0 -> -4 -> 2)
//     head->next->next->next->next = head->next;  // Creating a cycle at node with value 2

//     Solution solution;
    
//     if (solution.hasCycle(head)) {
//         std::cout << "The linked list has a cycle." << std::endl;
//     } else {
//         std::cout << "The linked list does not have a cycle." << std::endl;
//     }

//     return 0;
// }


// Version 3
