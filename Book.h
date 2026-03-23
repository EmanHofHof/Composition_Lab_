//Name: Ethan Hofsteen
//Date: 3/23/26
//Class: MSCI-272
//Purpose: Define the Book class and outline methods to be defined in book.cpp
#ifndef BOOK_H
#define BOOK_H
#include <string>
#include "Page.h"
class Book {
public:
    //Constructors
    Book();
    Book(const std::string& t, const std::string& a);
    //Method Definitions
    void setTitle(const std::string& t);
    std::string getTitle() const;
    void setAuthor(const std::string& a);
    std::string getAuthor() const;
    // Aggregation: Book contains a Page
    void setPageDetails(int pageNum, const std::string& pageContent);
    int getCurrentPageNumber() const;
    std::string getCurrentPageContent() const;
private:
    std::string title;
    std::string author;
    Page currentPage; // Aggregation
};

#endif // BOOK_H