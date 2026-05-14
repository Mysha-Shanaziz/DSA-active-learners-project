#ifndef FICTION_H
#define FICTION_H

#include "Book.h"

class Fiction : public Book
{
public:
    Fiction(string t, string a, string i)
        : Book(t, a, i)
    {
    }

    ~Fiction()
    {
        cout << "Fiction Destructor Called\n";
    }

    void display()
    {
        cout << "\n--- Fiction Book ---\n";
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << isbn << endl;
    }
};

#endif
