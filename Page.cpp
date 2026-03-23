//Name: Ethan Hofsteen
//Date: 3/23/26
//Class: MSCI-272
//Purpose: Define the methods outlined by page.h
#include "Page.h"
#include <string>

    Page::Page() : pageNumber(0), content("Empty Page") {}
    Page::Page(int num, const std::string& text) : pageNumber(num), content(text) {}
    void Page::setPageNumber(int num) {
        pageNumber = num;
    }
    int Page::getPageNumber() const {
        return pageNumber;
    }
    void Page::setContent(const std::string& text) {
        content = text;
    }
    std::string Page::getContent() const {
        return content;
    }
