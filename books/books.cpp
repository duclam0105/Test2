#include "books.h"

// //===BOOKS FUNCTION
int books::getPage() { return this->numPage; }
string books::getAuthor() { return this->author; }
void books::setNumPage(const int& page) { this->numPage = page; }
void books::setAuthor(const string& author) { this->author = author; }
void books::addData() {
    document::addData();
    cout << "Pages: ";
    cin >> this->numPage;
    cin.ignore();
    cout << "Author: ";
    string str;
    getline(cin, str);
    chuanhoaTen(str);
    setAuthor(str);
    this->setType(sach);
}
void books::showData() {
    document::showData();
    cout << " - Pages: " << this->numPage << " - Author: " << this->author << endl;
}
