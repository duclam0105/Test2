#ifndef __LIBRARY
#define __LIBRARY

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

#define yes 1
#define no 0
typedef enum { cmd_exit, cmd_add, cmd_remove, cmd_find, cmd_showlist }comand;
typedef enum { exit_t, books_t, magazines_t, news_t }type_t;

typedef enum {
    sach,
    tapchi,
    bao,
    khac
}document_type;

void chuanhoaTen(string&);
bool checkDate(string date);
bool checkID(string id, string temp = "FPT");
void chuanhoaID(string& a);

class myException :public exception {
    string msg;
public:
    myException(string mess) {
        msg = mess;
    }
    string what() {
        return msg;
    }
};

#endif