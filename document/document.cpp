#include "document.h"

//===DOCUMENT FUNCTION
void document::autoSetID() {         //Form: FPTxxxx
    this->id = "FPT" + string(4 - to_string(STT).length(), '0') + to_string(STT);
}
string document::getID() { return this->id; }
int document::getNumber() { return this->number; }
string document::getNXB() { return this->NXB; }
document_type document::getType() { return this->type; }
void document::setID(const string& id) { this->id = id; }
void document::setNumber(const int& num) { this->number = number; }
void document::setNXB(const string& nxb) { this->NXB = nxb; }
void document::setType(const document_type& type) { this->type = type; }
void document::addData() {       //ID is auto set
    // cout << "ID: ";
    // cin >> this->id;
    autoSetID();
    string str;
    cin.ignore();
    cout << "NXB: ";
    // cin >> this->NXB;
    getline(cin, str);
    chuanhoaTen(str);
    setNXB(str);
    cout << "Quantity: ";
    cin >> this->number;
}
void document::showData() {
    cout << "ID: " << this->id << " - NXB: " << this->NXB << " - Quantity: " << this->number;
}
