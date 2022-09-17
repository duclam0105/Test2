#include "magazines.h"

// //===MAGAZINES FUNCTION
int magazines::getNumRelease() { return this->numRelease; }
int magazines::getMonRelease() { return this->monRelease; }
void magazines::setNumRelease(const int& num) { this->numRelease = num; }
void magazines::setMonRelease(const int& mon) { this->monRelease = mon; }
void magazines::addData() {
    document::addData();
    cout << "Release: ";
    cin >> this->numRelease;
    cout << "Month: ";
    cin >> this->monRelease;
    this->setType(tapchi);
}
void magazines::showData() {
    document::showData();
    cout << " - Release: " << this->numRelease << " - Month: " << this->monRelease << endl;
}
