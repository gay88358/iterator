#include "../include/book.h"


Book::Book(string name, string author): _name(name), _author(author) {    
}

string Book::name() const {
    return this->_name;
}

string Book::author() const {
    return this->_author;
}
