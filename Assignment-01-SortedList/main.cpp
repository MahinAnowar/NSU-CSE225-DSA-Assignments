#include <iostream>
#include <limits>
#include "SortedList.h"

// Added for convenience as requested
using namespace std;


void showMenu() {
    cout << "\n--- Sorted List Operations ---" << endl;
    cout << endl;
    cout << "1. Insert an item" << endl;
    cout << "2. Delete an item" << endl;
    cout << "3. Search for an item" << endl;
    cout << "4. Print the list" << endl;
    cout << "5. Exit" << endl;
    cout << endl;
    cout << "Enter your choice: ";

}

int main() {
    SortedList myList; // Create an instance of our SortedList class
    int choice = 0;
    int item;

    do {
        showMenu();

        // This block ensures the program doesn't crash or loop infinitely
        // if the user enters something that isn't a number.
        cin >> choice;
        if (cin.fail()) {
            cout << endl;
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            choice = 0;
            continue; // Skip the rest of the loop and show the menu again
        }


        switch (choice) {
            case 1:
                cout << "Enter the number to insert: ";
                cin >> item;

                if(cin.fail()){
                    cout << "Invalid input for item. Please enter a number." << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;
                }
                myList.insertItem(item);
                break;
            case 2:
                cout << "Enter the number to delete: ";
                cin >> item;
                 if(cin.fail()){
                    cout << endl;
                    cout << "Invalid input for item. Please enter a number." << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;
                }
                myList.deleteItem(item);
                break;
            case 3:
                cout << "Enter the number to search for: ";
                cin >> item;
                 if(cin.fail()){
                    cout << "Invalid input for item. Please enter a number." << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;
                }
                {
                    int index = myList.searchItem(item);
                    if (index != -1) {
                        cout << endl;
                        cout << "Item " << item << " found at index " << index << "." << endl;
                    } else {
                        cout << endl;
                        cout << "Item " << item << " not found in the list." << endl;
                    }
                }
                break;
            case 4:
                myList.printList();
                break;
            case 5:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << endl;
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}

