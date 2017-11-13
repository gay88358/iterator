#include "../include/bookShell.h"
#include "../include/bookIterator.h"

Iterator* BookShell::createIterator() {
    return new BookIterator(this);
}

void BookShell::add(Book *book) {
    this->_books.push_back(book);
}

int BookShell::size() const {
    return this->_books.size();
}

Book* BookShell::book(int index) {
    return this->_books[index];
}