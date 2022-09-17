#include "Lib.h"

// //===================
void chuanhoaID(string& a) {
    if (a.length() > 3) {
        string res = "";
        stringstream ss(a);
        string token;
        while (ss >> token) {
            res += toupper(token[0]);
            res += toupper(token[1]);
            res += toupper(token[2]);
            for (int i = 3; i < token.length(); i++)
            {
                res += tolower(token[i]);
            }
            res += " ";
        }
        res.erase(res.length() - 1);
        a = res;
    }
}
void chuanhoaTen(string& a) {
    string res = "";
    stringstream ss(a);
    string token;
    while (ss >> token) {
        res += toupper(token[0]);
        for (int i = 1; i < token.length(); i++)
        {
            res += tolower(token[i]);
        }
        res += " ";
    }
    res.erase(res.length() - 1);
    a = res;
}
bool checkDate(string date) {   //return false if exception      
    try {                                    //    date form: dd/mm/yy
        stringstream ss(date);              //               01234567
        string token;                       //  dd: 1->31; mm: 1->12; yy: thoai mai;
        while (ss >> token)
        {
            if (token.length() != 8) {
                throw myException("Invalid date!");
            }
            if ((token[2] != '/') || (token[5] != '/')) {
                throw myException("Invalid date!");
            }
            for (int i = 0; i < token.length(); i++) {
                //Khong duoc co chu cai
                if ((i != 2) && (i != 5)) {
                    if ((token[i] < 48) || (token[i] > 57)) {
                        throw myException("Invalid date!");
                    }
                }
            }
        }
        stringstream ss1;
        int day, month, year;
        ss1 << date.substr(0, 2);
        ss1 >> day; ss1.clear();
        ss1 << date.substr(3, 2);
        ss1 >> month; ss1.clear();
        ss1 << date.substr(6, 2);
        ss1 >> year; ss1.clear();
        if ((day < 1) || (day > 31) || (month < 1) || (month > 12)) {
            throw myException("Invalid date!");
        }
    }
    catch (myException& ex2) {
        cout << ex2.what() << endl;
        return false;
    }
    return true;
}
bool checkID(string id, string temp) {
    try {
        if (id.length() != 7) { throw myException("Invalid ID!"); }
        if (id.substr(0, 3) != temp) {
            throw myException("Invalid ID!");
        }
        stringstream ss(id);
        string token;
        while (ss >> token)
        {
            for (int i = 3; i < token.length(); i++) {
                if ((token[i] < 48) || (token[i] > 57)) {
                    throw myException("Invalid ID!");
                }
            }
        }
    }
    catch (myException& ex1) {
        cout << ex1.what() << endl;
        return false;
    }
    return true;
}
// bool checkSameID(set<string> list, string id){
//     if(list.size() < 1) return true;
//     try{
//         for(string i:listID){
//             if(i == id){
//                 throw myException("ID has been used!");
//             }
//         }
//     }
//     catch(myException &e){
//         cout << e.what() << endl;
//         return false;
//     }
//     return true;
// }

