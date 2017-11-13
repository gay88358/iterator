#ifndef BOOKITERATOR_H
#define BOOKITERATOR_H

#include "./iterator.h"
#include "./bookShell.h"

class BookIterator : public Iterator {
public:
    BookIterator(BookShell *bookShell);
    bool hasNext();
    Book* currentBook();
private:
    int _index;
    BookShell* _bookShell;
};


#endif