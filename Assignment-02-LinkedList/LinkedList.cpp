#include "LinkedList.h"
#include <iostream>

using namespace std;

// Constructor
LinkedList::LinkedList()
{
    head = nullptr;
}

// Destructor
LinkedList::~LinkedList()
{
    cout << "\nDESTRUCTOR CALLED: Cleaning up memory..." << endl;
    Node* current = head;
    Node* nextNode = nullptr;

    while (current != nullptr)
    {
        nextNode = current->next; // Store the next node
        delete current;           // Delete the current node
        current = nextNode;       // Move to the next node
    }
    head = nullptr;
    cout << "Memory cleaned up." << endl;
}

// Core Operations


void LinkedList::insertAtBeginning(int data)
{
    // Create a new node
    Node* newNode = new Node();
    newNode->data = data;

    // Point the new node's 'next' to the current head
    newNode->next = head;

    // Update the head to be the new node
    head = newNode;

    cout << data << " inserted at the beginning." << endl;
}


void LinkedList::insertAtEnd(int data)
{
    // Create a new node
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr; // It will be the last node

    // If the list is empty, make the new node the head
    if (head == nullptr)
    {
        head = newNode;
        cout << data << " inserted at the end (was an empty list)." << endl;
        return;
    }

    // Otherwise, traverse to the last node
    Node* temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    // Link the last node to the new node
    temp->next = newNode;
    cout << data << " inserted at the end." << endl;
}


void LinkedList::insertSorted(int data)
{
    // Create the new node
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    // Case 1: List is empty or new node is smallest
    if (head == nullptr || head->data >= data)
    {
        newNode->next = head;
        head = newNode;
        cout << data << " inserted in sorted position (at head)." << endl;
        return;
    }

    // Case 2: Find the correct insertion point
    Node* current = head;

    while (current->next != nullptr && current->next->data < data)
    {
        current = current->next;
    }

    // Insert the new node
    newNode->next = current->next;
    current->next = newNode;
    cout << data << " inserted in sorted position." << endl;
}

void LinkedList::deleteFromBeginning()
{
    // Check if the list is empty
    if (head == nullptr)
    {
        cout << "Cannot delete: List is empty." << endl;
        return;
    }

    // Store the current head in a temporary pointer
    Node* temp = head;
    int deletedValue = head->data;

    // Move the head to the next node
    head = head->next;

    // Delete the old head
    delete temp;
    cout << deletedValue << " deleted from the beginning." << endl;
}


void LinkedList::deleteFromEnd()
{
    // Check if the list is empty
    if (head == nullptr)
    {
        cout << "Cannot delete: List is empty." << endl;
        return;
    }

    // Case 1: List has only one node
    if (head->next == nullptr)
    {
        cout << head->data << " deleted from the end (was the only node)." << endl;
        delete head;
        head = nullptr;
        return;
    }

    // Case 2: List has more than one node
    // Traverse to the *second-to-last* node
    Node* temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }

    // 'temp' is now the second-to-last node
    int deletedValue = temp->next->data;
    delete temp->next; // Delete the last node
    temp->next = nullptr; // Set the new last node's 'next' to null

    cout << deletedValue << " deleted from the end." << endl;
}


// Utility Operations


bool LinkedList::search(int item)
{
    if (head == nullptr)
    {
        cout << "List is empty." << endl;
        return false;
    }

    Node* temp = head;
    int position = 1;
    while (temp != nullptr)
    {
        if (temp->data == item)
        {
            cout << "FOUND: " << item << " is at position " << position << "." << endl;
            return true;
        }
        temp = temp->next;
        position++;
    }

    cout << "NOT FOUND: " << item << " is not in the list." << endl;
    return false;
}


void LinkedList::display()
{
    if (head == nullptr)
    {
        cout << "List is empty." << endl;
        return;
    }

    cout << "List (Head to Tail): HEAD -> ";
    Node* temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
