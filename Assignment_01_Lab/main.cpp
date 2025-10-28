#include <iostream>
#include <string>
#include <vector>
#include <cmath>


#include "Rectangle.h"
#include "TemplateRectangle.h"
#include "Book.h"
#include "UnsortedList.h"

using namespace std;

// --- Question 1 ---

void calculate(float radius, float *circumference, float *area) {
    const float PI = M_PI;
    *circumference = 2 * PI * radius;
    *area = PI * radius * radius;
}

void runQ1() {
    cout << "--- Question 1: Circle Calculations ---" << endl;
    cout << endl;
    float r = 5.0;
    float c, a;
    calculate(r, &c, &a);

    cout << "Radius: " << r << endl;
    cout << "Circumference: " << c << endl;
    cout << "Area: " << a << endl;
    cout << endl;
    cout << "=======================================" << endl;
    cout << endl;
}

// --- Question 2 ---
void runQ2() {
    cout << "--- Question 2: Rectangle Class ---" << endl;
    cout << endl;


    Rectangle r1(10.5, 5.2);
    Rectangle r2(7, 3);

    r1.displayDetails();
    r2.displayDetails();
    cout << endl;
    cout << "=======================================" << endl;
    cout << endl;
}

// --- Question 3 ---
void runQ3() {
    cout << "--- Question 3: Template Rectangle Class ---" << endl;
    cout << endl;

    TemplateRectangle<int> r_int(10, 5);
    r_int.displayDetails();

    TemplateRectangle<double> r_double(7.5, 3.2);
    r_double.displayDetails();
    cout << endl;
    cout << "=======================================" << endl;
    cout << endl;
}

// --- Question 4 ---
struct Student {
    string name;
    int id;
};

void runQ4() {
    cout << "--- Question 4: Dynamic Student Info ---" << endl;
    cout << endl;
    int numStudents = 4;

    Student* students = new Student[numStudents];

    students[0] = {"Olivia", 456};
    students[1] = {"Harris", 123};
    students[2] = {"Jacob", 678};
    students[3] = {"Isla", 349};


    for(int i = 0; i < numStudents; i++) {
        cout << students[i].name << "," << students[i].id << ",," << endl;
    }

    delete[] students;
    cout << endl;
    cout << "=======================================" << endl;
    cout << endl;
}

// --- Question 5 ---
void runQ5() {
    cout << "--- Question 5: Book List ---" << endl;
    cout << endl;

    UnsortedList<Book> bookList(10);


    bookList.InsertItem(Book("The C++ Language", "Stroustrup", 85.00));
    bookList.InsertItem(Book("Data Structures", "Lafore", 120.50));
    bookList.InsertItem(Book("Operating Systems", "Tanenbaum", 150.00));
    bookList.InsertItem(Book("Clean Code", "Martin", 45.99));
    bookList.InsertItem(Book("AI Modern Approach", "Russell", 110.75));


    cout << "--- Initial Book List ---" << endl;
    bookList.PrintList(cout);

    vector<Book> toDelete;
    bookList.ResetList();
    for (int i = 0; i < bookList.GetLength(); i++) {
        Book b = bookList.GetNextItem();

        if (b.getPrice() > 100) {
            toDelete.push_back(b);
        }
    }


    for (const auto& b : toDelete) {
        bookList.DeleteItem(b);
    }


    cout << "\n--- Updated Book List (Price <= 100) ---" << endl;
    bookList.PrintList(cout);
    cout << endl;
    cout << "=======================================" << endl;
    cout << endl;

}

// --- Main Driver ---
int main() {
    runQ1();
    runQ2();
    runQ3();
    runQ4();
    runQ5();

    return 0;
}
