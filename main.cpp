/*
Author : Mohan Singh Bomrel
Program: Program that creates Objects of both Book and Author classes
and make use of all members function and Interactive as possible
Date   : 2015/03/023
*/

#include <iostream>
#include "Book.h"

using namespace std;

int main()
{
    string authorName, emailOf, bookName;
    double priceOf;
    int stqQuantity;
    char sex;
    cout << "Enter the name of Author:" << endl;
    getline(cin, authorName);
    cout << "Enter the gender of Author (M/F):" << endl;
    cin >> sex;
    cin.get();
    cout << "Enter the email address:" << endl;
    getline(cin,emailOf);

    cout << "Enter the name of Book:" << endl;
    getline(cin, bookName);

    cout << "Enter the price of Book:\n Rs ";
    cin >> priceOf;

    cout << "Enter the Quantity of Book" << endl;
    cin >> stqQuantity;

    cout << endl;

    Author author1(authorName,emailOf,sex);
    Book book1(bookName,author1,priceOf,stqQuantity);

    cout<< book1.toString();
}
