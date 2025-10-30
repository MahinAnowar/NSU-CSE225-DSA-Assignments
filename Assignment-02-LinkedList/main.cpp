#include <iostream>
#include "LinkedList.h"

using namespace std;

// Function to display the menu
void showMenu() {
    cout << "\n--- C++ Linked List Menu ---" << endl;
    cout << endl;
    cout << "1. Insert at Beginning" << endl;
    cout << "2. Insert at End" << endl;
    cout << "3. Insert in Sorted Order" << endl;
    cout << "4. Delete from Beginning" << endl;
    cout << "5. Delete from End" << endl;
    cout << "6. Search for an Item" << endl;
    cout << "7. Display List" << endl;
    cout << "0. Exit Program" << endl;
    cout << endl;
    cout << "------------------------------" << endl;
    cout << endl;
    cout << "Enter your choice: ";
}

int main() {
    LinkedList list;
    int choice, value;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << endl;
                cout << "Enter value to insert at beginning: ";
                cin >> value;
                list.insertAtBeginning(value);
                break;
            case 2:
                cout << endl;
                cout << "Enter value to insert at end: ";
                cin >> value;
                list.insertAtEnd(value);
                break;
            case 3:
                cout << endl;
                cout << "Enter value to insert in sorted order: ";
                cin >> value;
                list.insertSorted(value);
                break;
            case 4:
                cout << endl;
                list.deleteFromBeginning();
                break;
            case 5:
                cout << endl;
                list.deleteFromEnd();
                break;
            case 6:
                cout << endl;
                cout << "Enter value to search: ";
                cin >> value;
                list.search(value);
                break;
            case 7:
                cout << endl;
                list.display();
                break;
            case 0:
                cout << endl;
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << endl;
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

        // Display the list after most operations for clarity
        if (choice >= 1 && choice <= 5) {
            list.display();
        }

    } while (choice != 0);

    return 0; // The destructor for 'list' will be called here automatically.
}
