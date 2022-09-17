#include "manage.h"

//========================MANAGE FUNCTION===========================================//
void QuanLySach::addData() {
    int a;
    cout << "1-Books - 2-Magazines - 3-News - 0-Back: ";
    cin >> a;
    switch (a) {
    case exit_t:
        return;
    case books_t: {
        books* p = new books;
        p->addData();
        p->showData();
        v.push_back(p);
        break;
    }
    case magazines_t: {
        magazines* p = new magazines;
        p->addData();
        p->showData();
        v.push_back(p);
        break;
    }
    case news_t: {
        news* p = new news;
        p->addData();
        p->showData();
        v.push_back(p);
        break;
    }
    default:
        cout << "Nhap sai! 1-Books - 2-Magazines - 3-News - 0-Back\n";
        break;
    }
    int q;
    cout << "Ban co muon nhap them? 1-Yes/0-No: "; cin >> q;
    if (q == 1) {
        QuanLySach::addData();
    }
}
void QuanLySach::delData(const string& id) {
    int count = 0;
    vector <int> vindex;
    if (v.empty()) {
        cout << "No data in list!" << endl;
        return;
    }
    for (int i = 0; i < v.size(); i++) {
        if (v[i]->getID() == id) {
            count++;
            document* tmp = v[i];
            v.erase(v.begin() + i);
            delete(tmp);
            i--;
        }
    }
    if (count == 0) {
        cout << "Can not find document has ID: " << id << " in list!" << endl;
        return;
    }
    cout << "Delete done!" << endl;
}
void QuanLySach::showMemberData(const unsigned int& index) {
    if (v.empty()) {
        // cout << "No data in list!"<<endl;
        return;
    }
    if (index < v.size()) {
        if (v[index]->getType() == sach) {
            books* pb = dynamic_cast<books*>(v[index]);
            pb->showData();
        }
        else if (v[index]->getType() == tapchi) {
            magazines* pm = dynamic_cast<magazines*>(v[index]);
            pm->showData();
        }
        else if (v[index]->getType() == bao) {
            news* pn = dynamic_cast<news*>(v[index]);
            pn->showData();
        }
    }
}
void QuanLySach::findData(const string& id) {
    int count = 0;
    if (v.empty()) {
        cout << "No data in list!" << endl;
        return;
    }
    for (int i = 0; i < v.size(); i++) {
        if (v[i]->getID() == id) {
            cout << i + 1 << ". ";
            count++;
            showMemberData(i);
        }
    }
    if (count == 0) {
        cout << "Can not find document has ID: " << id << " in list!" << endl;
    }
}
void QuanLySach::showList() {
    if (v.empty()) {
        cout << "No data in list!" << endl;
        return;
    }
    for (int i = 0; i < v.size(); i++) {
        cout << i + 1 << ". ";
        showMemberData(i);
    }
}
void QuanLySach::showType(const int& type) {
    if (v.empty()) {
        cout << "No data in list!" << endl;
        return;
    }
    int count = 0;
    if (type == 0) {
        showList();
    }
    else if (type == books_t) {
        for (int i = 0; i < v.size(); i++) {
            if (v[i]->getType() == sach) {
                count++;
                cout << i + 1 << ". ";
                showMemberData(i);
            }
        }
        if (count == 0) {
            cout << "No data to show!" << endl;
        }
    }
    else if (type == magazines_t) {
        for (int i = 0; i < v.size(); i++) {
            if (v[i]->getType() == tapchi) {
                count++;
                cout << i + 1 << ". ";
                showMemberData(i);
            }
        }
        if (count == 0) {
            cout << "No data to show!" << endl;
        }
    }
    else if (type == news_t) {
        for (int i = 0; i < v.size(); i++) {
            if (v[i]->getType() == bao) {
                count++;
                cout << i + 1 << ". ";
                showMemberData(i);
            }
        }
        if (count == 0) {
            cout << "No data to show!" << endl;
        }
    }
    else { return; }
}
