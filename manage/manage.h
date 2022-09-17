#ifndef __MANAGE_H
#define __MANAGE_H

#include "Lib.h"
#include "document.h"
#include "books.h"
#include "magazines.h"
#include "news.h"

//is a - has a
class QuanLySach {
    vector <document*> v;
    int id;
public:
    QuanLySach() {
        cout << "Quan li du lieu duoc tao!" << endl;
    }
    ~QuanLySach() {
        if (!v.empty()) {
            for (document* i : v) {
                delete(i);
            }
        }
    }
    void addData();
    void delData(const string& id);
    void findData(const string& id);
    void showType(const int& type);
    void showList();
    void showMemberData(const unsigned int& index);
    int getSize() {
        return v.size();
    }
};

#endif#
