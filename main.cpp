#include "Lib.h"
#include "document.h"
#include "books.h"
#include "magazines.h"
#include "news.h"
#include "manage.h"


int document::STT = 0;
//====== MAIN ======//
int main() {
    int a;
    QuanLySach cs;
    while (true) {
        cout << "===================\n";
        cout << "1-Them moi tai lieu\n2-Xoa tai lieu\n3-Tim kiem\n4-Hien thi danh sach\n0-Thoat\nMoi ban nhap: ";
        cin >> a;
        cout << "===================\n";
        switch (a) {
        case cmd_exit: {
            cout << "Close the program..." << endl;
            system("cls");
            return 0;
        }
        case cmd_add:
            cs.addData();
            break;
        case cmd_remove: {
            string str;
            do {
                cout << "Nhap ID tai lieu can xoa: ";
                cin >> str;
                chuanhoaID(str);
                if (str == "0") break;
            } while (!checkID(str));
            cs.delData(str);
            break;
        }
        case cmd_find: {
            string str1;
            do {
                cout << "Nhap ID tai lieu can tim kiem: ";
                cin >> str1;
                chuanhoaID(str1);
                if (str1 == "0") break;
            } while (!checkID(str1));
            cs.findData(str1);
            break;
        }
        case cmd_showlist: {
            int temp;
            cout << "0-All - 1-Books - 2-Magazines - 3-News: ";
            cin >> temp;
            cs.showType(temp);
            break;
        }
        default:
            break;
        }
    }
    cout << "Close the program..." << endl;
    system("cls");
    return 0;
}
