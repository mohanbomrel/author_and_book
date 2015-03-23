#include <string>
#include "Author.h"
using namespace std;

#ifndef BOOK_H
#define BOOK_H
class Book
{
private:
    string name;
    Author author;
    double price;
    int quantity;

public:
    Book(string, Author, double);
    Book(string , Author , double, int);

    string getName();
    Author getAuthor();
    void setPrice (double );
    double getPrice();
    void setQuantity(int );
    int getQuantity();
    string toString();
   // string getAuthorName();


};
#endif // BOOK_H
