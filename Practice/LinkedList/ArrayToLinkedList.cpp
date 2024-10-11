//https://www.geeksforgeeks.org/problems/introduction-to-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=introduction-to-linked-list

// #include<iostream>
// #include<vector>

// class Node {
// public:
//     int data;
//     Node* next;

//     // Default constructor
//     Node()
//     {
//         data = 0;
//         next = NULL;
//     }

//     // Parameterised Constructor
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// class Solution {
//     public:
//     Node* constructLL(std::vector<int>& arr){
//         int len = arr.size();
//         Node* head=new Node(arr[0]);
//         Node* temp=head;
//         for(int i=1;i<len;i++){
//             Node* N =new Node(arr[i]);
//             temp->next = N;
//             temp=temp->next; 
//         }
//         return head;
//     }
// };


// Approach 2

#include <iostream>
#include <vector>

class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node() : data(0), next(nullptr) {}

    // Parameterized constructor
    Node(int data) : data(data), next(nullptr) {}
};

// Solution class containing methods to construct and manipulate the linked list
class Solution {
public:
    // Function to construct a linked list from a vector of integers
    Node* constructLL(const std::vector<int>& arr) {
        // Check if the array is empty
        if (arr.empty()) {
            return nullptr;
        }

        Node* head = new Node(arr[0]);
        Node* temp = head;

        for (int i = 1; i < arr.size(); ++i) {
            Node* newNode = new Node(arr[i]);
            temp->next = newNode;
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

    // Destructor to clean up memory (deallocate the linked list)
    void deleteLL(Node* head) {
        Node* current = head;
        while (current != nullptr) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
};

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5}; 

    Solution solution;
    Node* head = solution.constructLL(arr);

    std::cout << "Linked list elements: ";
    solution.printLL(head);

    solution.deleteLL(head);

    return 0;
}
