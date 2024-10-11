#include<iostream>

struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = nullptr;
  }
}; 

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node* temp = head;
        if(temp==nullptr){
            Node* newNode = new Node(x);
            return newNode;
        }
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        Node* tail = new Node(x);
        temp->next = tail;
        return head;
    }
};


// With main function

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

// Function to insert a node at the end of the linked list
Node* insertAtEnd(Node* head, int x) {
    // If the list is empty, the new node becomes the head
    if (head == nullptr) {
        return new Node(x);
    }

    // Traverse to the end of the list
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    // Insert the new node at the end
    Node* tail = new Node(x);
    temp->next = tail;

    return head;
}

// Function to print the linked list
void printLL(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

// Main function to test insertAtEnd
int main() {
    Node* head = nullptr; // Initialize an empty list

    // Insert elements at the end
    head = insertAtEnd(head, 10); // List: 10
    head = insertAtEnd(head, 20); // List: 10 20
    head = insertAtEnd(head, 30); // List: 10 20 30
    head = insertAtEnd(head, 40); // List: 10 20 30 40

    // Print the linked list
    std::cout << "Linked list elements: ";
    printLL(head);

    return 0;
}
