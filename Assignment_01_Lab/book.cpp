#include "Book.h"
#include <iomanip>

Book::Book() : bookName(""), author(""), price(0.0) {}

Book::Book(std::string name, std::string auth, double p)
    : bookName(name), author(auth), price(p) {}

std::string Book::getName() const
{
    return bookName;
}

std::string Book::getAuthor() const
{
    return author;
}

double Book::getPrice() const
{
    return price;
}


void Book::print() const
{
    std::cout << "Name: " << bookName
              << ", Author: " << author
              << ", Price: $" << std::fixed << std::setprecision(2) << price
              << std::endl;
}


bool Book::operator==(const Book& other) const
{
    return bookName == other.bookName;
}


bool Book::operator!=(const Book& other) const
{
    return !(*this == other);
}


std::ostream& operator<<(std::ostream& os, const Book& book)
{
    os << "Name: " << book.bookName
       << ", Author: " << book.author
       << ", Price: $" << std::fixed << std::setprecision(2) << book.price;
    return os;
}
