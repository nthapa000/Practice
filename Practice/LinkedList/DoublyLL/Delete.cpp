#include<iostream>

class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        // Your code here
        // position follows 0 based indexing
        Node* temp=head;
        // We have to delete head
        if(x==1){
          Node* newHead = temp->next;
          newHead->prev=nullptr;
          return newHead;
        }

      int count = 0;
      // Traversing the correct index
        while(temp!=nullptr && count!=x){
          count++;
          temp=temp->next;
        }
      Node* pastNode= temp->prev;
      Node* currNode= temp;
      Node* futureNode= temp->next;
      if(futureNode==nullptr){
        pastNode->next = nullptr;
        currNode->prev = nullptr;
        return head;
      }
      pastNode->next=futureNode;
      futureNode->prev=pastNode;
      currNode->next=nullptr;
      currNode->prev=nullptr;
      return head;
    }
};

// Correct

// Node structure (assuming doubly linked list)
struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
};

Node* deleteNode(Node* head, int x) {
    // Edge case: empty list
    if (head == nullptr) return nullptr;

    Node* temp = head;

    // Deleting the head node (x == 1 for 1-based indexing)
    if (x == 1) {
        Node* newHead = temp->next;
        if (newHead != nullptr) {
            newHead->prev = nullptr;
        }
        delete temp; // Free the memory of the deleted node
        return newHead; // Return new head
    }

    // Traverse to the node at position 'x'
    int count = 1;  // Start at 1 for 1-based indexing
    while (temp != nullptr && count != x) {
        count++;
        temp = temp->next;
    }

    // If temp is nullptr, position x was out of bounds
    if (temp == nullptr) {
        std::cerr << "Invalid position: " << x << std::endl;
        return head;
    }

    // Deleting a node that is not the head
    Node* pastNode = temp->prev;
    Node* futureNode = temp->next;

    // If we're deleting the last node
    if (futureNode == nullptr) {
        pastNode->next = nullptr;
    } else {
        pastNode->next = futureNode;
        futureNode->prev = pastNode;
    }

    delete temp; // Free the memory of the deleted node
    return head;
}

int main() {
    // Create a doubly linked list: 1 <-> 2 <-> 3
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    // Delete the node at position 2 (1-based index)
    head = deleteNode(head, 2);

    // Print the list to verify the deletion
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;

    return 0;
}
