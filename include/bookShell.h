#ifndef BOOKSHELL_H
#define BOOKSHELL_H

#include <vector>
using std::vector;
#include "./aggregate.h"
#include "./book.h"

class BookShell : public Aggregate {
public:
    Iterator* createIterator();
    void add(Book *book);
    Book* book(int index);
    int size() const;
private:
    vector<Book*> _books;
};

#endif