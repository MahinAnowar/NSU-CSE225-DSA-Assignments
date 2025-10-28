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

## Assignment 03: [Title of Next Assignment] (Coming Soon)

* [Brief description of the next assignment]
* [Features...]
* [Code Structure...]
