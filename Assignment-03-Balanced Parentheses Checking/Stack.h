#ifndef STACK_H
#define STACK_H

class CharStack {
private:
    char* array;
    int top;
    int capacity;

public:
    // Constructor
    CharStack(int size);

    // Destructor
    ~CharStack();

    // Method to add an element to the stack
    void push(char val);

    // Method to remove and return the top element
    char pop();

    // Method to check if the stack is empty
    bool isEmpty();

    // Method to check if the stack is full
    bool isFull();
};

#endif // STACK_H
