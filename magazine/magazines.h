#ifndef __MAGAZINE_H
#define __MAGAZINE_H

#include "Lib.h"
#include "document.h"

class magazines :public document {
    int numRelease;
    int monRelease;
public:
    magazines() {}
    int getNumRelease();
    int getMonRelease();
    void setNumRelease(const int& num);
    void setMonRelease(const int& mon);
    void addData();
    void showData();
};


#endif#

