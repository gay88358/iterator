#ifndef ITERATOR_H
#define ITERATOR_H

#include "./book.h"
class Iterator {
public:
    virtual bool hasNext() = 0;
    virtual Book* currentBook() = 0;
private:
};

#endif