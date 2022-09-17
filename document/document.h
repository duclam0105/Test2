#ifndef __DOCUMENT_H
#define __DOCUMENT_H

#include "Lib.h"

class document {
    string id;          //Form: FPTxxxx
    int number;
    string NXB;
    document_type type;
public:
    static int STT;
    document() {
        id = "";
        number = 0;
        NXB = "";
        type = khac;
        STT++;
    }
    virtual ~document() {}
    string getID();
    int getNumber();
    string getNXB();
    document_type getType();
    void setID(const string& id);
    void setNumber(const int& num);
    void setNXB(const string& nxb);
    void setType(const document_type& type);
    void autoSetID();
    virtual void addData();
    virtual void showData();
    // friend void chuanhoaID(const document& a);
    // bool operator < (document a);
};

#endif#
