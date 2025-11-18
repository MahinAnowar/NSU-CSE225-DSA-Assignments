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

## Assignment 01-Lab: Application of C++ and OOP Principles

This project demonstrates a wide range of C++ and Object-Oriented Programming (OOP) concepts. It progresses from fundamental features like pointers and dynamic memory allocation to advanced OOP principles like templates, operator overloading, and RAII.

### Core Features
* **Class Encapsulation:** A `Rectangle` class that hides its data and provides public methods for calculations.
* **Dynamic Memory:** A demonstration of manually allocating and deallocating an array of `Student` structs using `new[]` and `delete[]`.
* **Template Class (Generics):** A `TemplateRectangle` class is implemented to work with multiple numeric types (e.g., `int`, `double`).
* **Generic Data Structure:** A template-based `UnsortedList` class that can store any object type.
* **Resource Management (RAII):** The `UnsortedList` class manages its own memory, allocating with `new[]` in the constructor and freeing it with `delete[]` in the destructor.
* **Operator Overloading:** A `Book` class overloads the `==` and `<<` operators, allowing it to integrate seamlessly with the `UnsortedList` for deletion and printing.

### Code Structure
The project is modularized into several class files:
* `Rectangle.h/.cpp`: Defines the standard `Rectangle` class.
* `TemplateRectangle.h`: Defines the generic `TemplateRectangle<T>` class.
* `Book.h/.cpp`: Defines the `Book` class with overloaded operators.
* `UnsortedList.h`: Defines the generic `UnsortedList<ItemType>` class.
* `main.cpp`: The driver file that executes separate functions (`runQ1` to `runQ5`) to demonstrate each concept.

### OOP Concepts Applied
* **Encapsulation:** Data members in `Rectangle`, `Book`, and `UnsortedList` are `private`, with a `public` interface.
* **Abstraction:** The `UnsortedList` hides its internal array logic behind a simple `InsertItem` / `DeleteItem` API.
* **Polymorphism (Parametric):** `TemplateRectangle` and `UnsortedList` use templates to work with any data type.
* **Polymorphism (Ad-hoc):** The `Book` class overloads `operator==` (for list deletion) and `operator<<` (for printing).
* **Constructors/Destructors:** Classes use constructors for proper initialization, and the `UnsortedList` destructor implements RAII to prevent memory leaks.

---

## Assignment 02: Singly Linked List Implementation

This project is a C++ implementation of a singly linked list. The program uses an Object-Oriented Programming (OOP) approach by defining a `LinkedList` class to manage node operations and provides a console menu for user interaction.

### Core Features
* **Insert at Beginning:** Adds a new node to the front of the list.
* **Insert at End:** Appends a new node to the end of the list.
* **Insert in Sorted Order:** Inserts a node in its correct position to maintain an ascending sorted list.
* **Delete from Beginning:** Removes the first node (head) of the list.
* **Delete from End:** Removes the last node (tail) of the list.
* **Search for Item:** Traverses the list to find a specific value.
* **Display List:** Prints all elements in the list from head to tail.

### Code Structure
The code is organized into three files for modularity:
* `LinkedList.h`: The header file defining the `Node` structure and the `LinkedList` class interface.
* `LinkedList.cpp`: The source file containing the implementation of the `LinkedList` class's member functions.
* `main.cpp`: The driver file that contains the `main()` function and the user-facing console menu.

### OOP Concepts Applied
* **Encapsulation:** The `head` pointer is `private` within the `LinkedList` class. All list manipulations are performed through `public` member functions, protecting the list's internal state.
* **Abstraction:** The `main` function interacts with a simple API (e.g., `list.insertAtEnd(10)`) without needing to understand the underlying pointer manipulation, traversal, or memory allocation.
* **Dynamic Memory Management:** The list uses `new` to create `Node` objects on the heap during insertion and `delete` to free that memory during deletion, demonstrating manual memory control.
* **Constructors & Destructors (RAII):** The class has a constructor (`LinkedList()`) to initialize the `head` pointer to `nullptr`. It also has a destructor (`~LinkedList()`) that automatically traverses and deletes all nodes, preventing memory leaks when the list object goes out of scope.

---

## Assignment 03: Balanced Parentheses Checking

This project is a C++ solution to the classic "Balanced Parentheses" problem. Instead of using the standard library, it implements a custom `CharStack` class from scratch to validate the syntax of mathematical expressions or code snippets.

### Core Features
* **Custom Stack Implementation:** A robust character stack created manually without using `std::stack`.
* **Push & Pop Operations:** Implements standard LIFO (Last-In-First-Out) logic to manage nested parentheses.
* **Balance Validation:** Logic to detect correctly matched pairs `()` and identify unbalanced inputs (missing closing or extra opening brackets).
* **Dynamic Sizing:** The stack is dynamically allocated based on the length of the input string to optimize memory usage.
* **Multiple Use Case Testing:** The driver program runs a continuous loop, allowing users to test multiple expressions in a single session.

### Code Structure
The code is organized into three files for modularity:
* `Stack.h`: The header file defining the `CharStack` class and its member functions.
* `Stack.cpp`: The source file containing the implementation of the stack operations (`push`, `pop`, `isEmpty`, `isFull`).
* `main.cpp`: The driver file that uses the `CharStack` to implement the balancing algorithm and handles user input.

### OOP Concepts Applied
* **Encapsulation:** The `CharStack` class bundles the data (array pointer, top index, capacity) and methods together. Key data members are `private` to prevent external corruption of the stack state.
* **Abstraction:** The complex logic of array index management is hidden. The main program interacts with the stack using high-level commands like `push()` and `pop()`.
* **Dynamic Memory Management:** The class demonstrates manual memory management:
    * **Constructor:** Dynamically allocates memory (`new char[]`) for the stack.
    * **Destructor:** Automatically frees that memory (`delete[]`) when the stack object goes out of scope to prevent memory leaks.
