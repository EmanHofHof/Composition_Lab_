//Name: Ethan Hofsteen
//Date: 3/23/26
//Class: MSCI-272
//Purpose: Outline the Page class to be defined in page.cpp
#ifndef PAGE_H
#define PAGE_H
#include <string>
class Page {
public:
    //Constructors
    Page();
    Page(int num, const std::string& text);
    //Method  Declarations
    void setPageNumber(int num);
    int getPageNumber() const;
    void setContent(const std::string& text);
    std::string getContent() const;
private:
    int pageNumber;
    std::string content;
};

#endif // PAGE_H