#include "../include/bookIterator.h"


BookIterator::BookIterator(BookShell *bookShell) {
    this->_bookShell = bookShell;
    this->_index = 0;
}

bool BookIterator::hasNext() {
    return this->_index < this->_bookShell->size();
}

Book*  BookIterator::currentBook() {
    Book *book = this->_bookShell->book(this->_index++);
    return book;
}