#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <vector>
using namespace std;

class Book
{
protected:
    string title;
    string author;
    string isbn;

public:
    // Constructor
    Book(string t, string a, string i)
    {
        title = t;
        author = a;
        isbn = i;
    }

    // Virtual Destructor
    virtual ~Book()
    {
        cout << "Book Destructor Called\n";
    }

    // Pure Virtual Function
    virtual void display() = 0;

    string getISBN()
    {
        return isbn;
    }

    // Friend Function
    friend void showBookCount(vector<Book*> books);
};

// Friend Function Definition
void showBookCount(vector<Book*> books)
{
    cout << "Total Books: " << books.size() << endl;
}

#endif
