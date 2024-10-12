#include <iostream>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
    Node(int x)
    {
        data = x;
        next = prev = NULL;
    }
};

class Solution
{
public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data)
    {
        // code here
        // If head is null then it doesn't matter which position we want to insert
        if (head == nullptr)
        {
            return new Node(data);
        }
        Node *temp1 = head;
        int lengthLL = 0;
        while (temp1 != nullptr)
        {
            lengthLL++;
            temp1 = temp1->next;
        }

        // given that p is less than size of doubly linked list
        int count = -1;
        // since we are starting doing 0th based indexing
        Node *temp = head;
        while (temp!=nullptr)
        {
            count++;
            temp = temp->next;
            if(count==pos){
                break;
            }
        }
        Node *curr = new Node(data);
        if (count == (lengthLL - 1))
        {
            curr->prev = temp;
            temp->next = curr;
            return head;
        }
        Node *future = temp->next;
        temp->next = curr;
        curr->next = future;
        curr->prev = temp;
        future->prev = curr;
    }
};

// Solution

class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data)
    {
        // code here
        // If head is null then it doesn't matter which position we want to insert
        if (head == nullptr)
        {
            return new Node(data);
        }
        Node *temp1 = head;
        int lengthLL = 0;
        while (temp1 != nullptr)
        {
            lengthLL++;
            temp1 = temp1->next;
        }

        // given that p is less than size of doubly linked list
        int count = -1;
        // since we are starting doing 0th based indexing
        Node *temp = head;
        while (temp!=nullptr)
        {
            count++;
            if(count==pos){
                break;
            }
            temp = temp->next;
        }
        Node *curr = new Node(data);
        if (count == (lengthLL - 1))
        {
            curr->prev = temp;
            temp->next = curr;
            return head;
        }
        Node *future = temp->next;
        temp->next = curr;
        curr->next = future;
        curr->prev = temp;
        future->prev = curr;
        return head;
    }
};