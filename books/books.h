#ifndef __BOOKS_H
#define __BOOKS_H

#include "Lib.h"
#include "document.h"

class books :public document {
private:
    int numPage;
    string author;
public:
    books() {}
    int getPage();
    string getAuthor();
    void setNumPage(const int& page);
    void setAuthor(const string& author);
    void addData();
    void showData();
};

#endif#
