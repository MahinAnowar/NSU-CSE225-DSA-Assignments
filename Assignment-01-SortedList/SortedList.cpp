#include "SortedList.h"
#include <algorithm> // Required for std::lower_bound


using namespace std;

SortedList::SortedList()
{
    // The vector 'list' is already empty by default,
}


void SortedList::insertItem(int item)
{

    auto it = lower_bound(list.begin(), list.end(), item);

    list.insert(it, item);
    cout << endl;
    cout << "Successfully inserted " << item << "." << endl;
}

// Searches for an item using binary search.
int SortedList::searchItem(int item)
{

    auto it = lower_bound(list.begin(), list.end(), item);


    if (it != list.end() && *it == item)
    {

        return it - list.begin();
    }

    // If the item is not found, return -1.
    return -1;
}

// Deletes an item from the list.
bool SortedList::deleteItem(int item)
{
    // First, find the index of the item.
    int index = searchItem(item);

    // If searchItem returned -1, the item doesn't exist.
    if (index == -1)
    {
        cout << endl;
        cout << "Item " << item << " not found in the list." << endl;
        return false;
    }

    // If the item was found, erase it from the vector.
    list.erase(list.begin() + index);
    cout << endl;
    cout << "Successfully deleted " << item << "." << endl;
    return true;
}

// Prints all elements in the list.
void SortedList::printList()
{
    if (isEmpty())
    {
        cout << endl;
        cout << "The list is empty." << endl;
        return;
    }
    cout << endl;
    cout << "List contents: [ ";
    for (int item : list)
    {
        cout << item << " ";
    }
    cout << "]" << endl;
}

// Checks if the list is empty.
bool SortedList::isEmpty()
{
    return list.empty();
}


