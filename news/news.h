#ifndef __WORKER_H
#define __WORKER_H

#include "Lib.h"
#include "document.h"

class news :public document {
    string date;
public:
    news() {}
    string getDate();
    void setDate(const string& date);
    void addData();
    void showData();
};

#endif#
