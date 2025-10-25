#ifndef SORTEDLIST_H
#define SORTEDLIST_H

#include <vector>
#include <iostream>


class SortedList
{
private:

    std::vector<int> list;

public:
    // Constructor
    SortedList();

    // Takes an integer 'item' as input.
    void insertItem(int item);

    // Returns true if the item was found and deleted, false otherwise.
    bool deleteItem(int item);

    // Returns the index of the item if found, otherwise returns -1.
    int searchItem(int item);

    // Prints all the items currently in the list.
    void printList();

    // Checks if the list is empty.
    bool isEmpty();
};

#endif // SORTEDLIST_H
