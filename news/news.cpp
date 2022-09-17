#include "news.h"

// //===NEWS FUNCTION

void news::addData() {
    document::addData();
    do {
        cout << "Date (dd/mm/yy): ";
        cin >> this->date;
        if (this->date == "0") break;
    } while (!checkDate(this->date));
    this->setType(bao);
}
void news::showData() {
    document::showData();
    cout << " - Date: " << this->date << endl;
}
