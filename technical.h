#ifndef TECHNICAL_H
#define TECHNICAL_H

#include "Book.h"

class Technical : public Book
{
public:
    Technical(string t, string a, string i)
        : Book(t, a, i)
    {
    }

    ~Technical()
    {
        cout << "Technical Destructor Called\n";
    }

    void display()
    {
        cout << "\n--- Technical Book ---\n";
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << isbn << endl;
    }
};

#endif
