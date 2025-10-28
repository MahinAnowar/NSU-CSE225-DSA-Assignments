#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>


class Book {
private:
    std::string bookName;
    std::string author;
    double price;

public:
    Book();
    Book(std::string name, std::string auth, double p);

    void print() const;

    std::string getName() const;
    std::string getAuthor() const;
    double getPrice() const;


    bool operator==(const Book& other) const;
    bool operator!=(const Book& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Book& book);
};

#endif
