#include <iostream>
using namespace std;

class Book {
    public:
    string title;
    string author;
    int year;
};

int main () {
    Book b1;
    Book b2;

    b1.title = "Matilda";
    b1.author = "Roald Dahl";
    b1.year = 1988;

    b2.title = "The Giving Tree";
    b2.author = "Shel Silverstein";
    b2.year = 1964;

    cout << b1.title << ", " << b1.author << ", " << b1.year << endl ;
    cout << b2.title << ", " << b2.author << ", " << b2.year << endl ;

    //Matilda, Roald Dahl, 1988
// , Shel Silverstein, 1964
}