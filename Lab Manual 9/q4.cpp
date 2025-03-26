#include <iostream>
#include <iomanip>
using namespace std;
class Book {
    string title;
    string author;
    string status;
public:
    Book(string title="", string author="", string status="") {
        this->title = title;
        this->author = author;
        this->status = status;
    }
    void displayDetails() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Status: " << status << endl;
    }
    void borrow() {
        if (status == "Available") {
            status = "Borrowed";
        } else {
            cout << "Book is already borrowed by someone else" << endl;
        }
    }
};
int main() {
    const Book books[3] = {
        Book("DS-MALIK", "DS MALIK", "Available"),
        Book("ROBERT-LAFORE", "ROBERT LAFORE", "Available"),
        Book("C-PROLOG", "CHRISTOPHER SWIFT", "Available")
    };
    Book books2[2] = {
        Book("DS-MALIK", "Shelly Malik", "Available"),
        Book("ROBERT-LAFORE", "Robert Lafore", "Available")
    };
    for (int idx=0; idx<3; idx++) {
        books[idx].displayDetails();
        cout << setfill('-') << setw(40) << "" << endl;
    }
    // Restricted access to books[0] and books[1] because they are const
    // books[0].borrow();
    // books[1].borrow();
    books2[0].borrow();
    books2[1].borrow();
    for (int idx=0; idx<2; idx++) {
        books2[idx].displayDetails();
        cout << setfill('-') << setw(40) << "" << endl;
    }
}

