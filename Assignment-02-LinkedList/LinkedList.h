#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// Define the structure for a single node in the list
struct Node
{
    int data;
    Node* next;
};

// Define the LinkedList class
class LinkedList
{
private:
    Node* head;

public:
    // Constructor

    LinkedList();

    // Destructor

    ~LinkedList();

    // Core Operations

    void insertAtBeginning(int data);

    void insertAtEnd(int data);

    void insertSorted(int data);

    void deleteFromBeginning();

    void deleteFromEnd();

    // Utility Operations

    bool search(int item);

    void display();
};

#endif // LINKEDLIST_H
