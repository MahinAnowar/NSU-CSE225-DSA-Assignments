#include <iostream>
#include "Stack.h"

using namespace std;

// Constructor
CharStack::CharStack(int size) {
    capacity = size;
    array = new char[size]; // Dynamic memory allocation
    top = -1;
}

// Destructor
CharStack::~CharStack() {
    delete[] array;
}

// Pushes a character onto the stack
void CharStack::push(char val) {
    if (isFull()) {
        cout << "Stack Overflow! Cannot push " << val << endl;
        return;
    }
    array[++top] = val;
}

// Pops a character from the stack
char CharStack::pop() {
    if (isEmpty()) {
        cout << "Stack Underflow!" << endl;
        return '\0'; // Return null character if empty
    }
    return array[top--];
}

// Checks if the stack is empty
bool CharStack::isEmpty() {
    return top == -1;
}

// Checks if the stack is full
bool CharStack::isFull() {
    return top == capacity - 1;
}
