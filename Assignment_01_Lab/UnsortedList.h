#ifndef UNSORTEDLIST_H
#define UNSORTEDLIST_H

#include <iostream>


template <class ItemType>
class UnsortedList {
private:
    int length;
    ItemType* info;
    int maxItems;
    int currentPos;

public:
    UnsortedList(int size = 100) {
        maxItems = size;
        length = 0;
        info = new ItemType[maxItems];
        currentPos = -1;
    }

    ~UnsortedList() {
        delete[] info;
    }

    void MakeEmpty() { length = 0; }
    bool IsFull() const { return (length == maxItems); }
    int GetLength() const { return length; }

    void InsertItem(ItemType item) {
        if (!IsFull()) {
            info[length] = item;
            length++;
        }
    }


    void DeleteItem(ItemType item) {
        int location = 0;
        while (location < length && !(info[location] == item)) {
            location++;
        }

        if (location < length) {
            info[location] = info[length - 1];
            length--;
        }
    }

    void ResetList() { currentPos = -1; }
    ItemType GetNextItem() {
        currentPos++;
        return info[currentPos];
    }

    void PrintList(std::ostream& os) const {
        for (int i = 0; i < length; i++) {
            os << info[i] << std::endl;
        }
    }
};

#endif // UNSORTEDLIST_H
