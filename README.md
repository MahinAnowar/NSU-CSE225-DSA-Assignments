# NSU CSE225: Data Structures & Algorithms Assignments

This repository contains all my lab assignments for the CSE225 (Data Structures and Algorithms) course at North South University.

---

## Assignment 01: Sorted List Operations

This project is a C++ implementation of a sorted list data structure. The program uses an Object-Oriented Programming (OOP) approach by encapsulating the logic within a `SortedList` class and provides a console menu for a user to interact with the list.

### Core Features
* **Insert Item:** Adds an integer to the list while maintaining its sorted order.
* **Delete Item:** Finds and removes a specified integer from the list.
* **Search Item:** Uses an efficient binary search (`std::lower_bound`) to find the index of an item.
* **Print List:** Displays all items currently in the list.
* **Input Validation:** Includes robust error handling to prevent crashes from invalid (non-numeric) input.

### Code Structure
The code is organized into three files for modularity:
* `SortedList.h`: The header file containing the `SortedList` class declaration (interface).
* `SortedList.cpp`: The source file containing the implementation of the `SortedList` class's member functions.
* `main.cpp`: The driver file that contains the `main()` function, user menu, and input/output logic.

### OOP Concepts Applied
* **Encapsulation:** The list's data (`std::vector`) is kept `private`, accessible only through `public` member functions. This protects the list's integrity and ensures it always stays sorted.
* **Abstraction:** The `main` function interacts with a simple, high-level interface (`insertItem()`, `deleteItem()`) without needing to know the complex details of the underlying implementation (like binary search or vector memory management).

---

## Assignment 02: [Title of Next Assignment] (Coming Soon)

* [Brief description of the next assignment]
* [Features...]
* [Code Structure...]

---

## Assignment 03: [Title of Next Assignment] (Coming Soon)

* [Brief description of the next assignment]
* [Features...]
* [Code Structure...]
