#ifndef BOOK_H
#define BOOK_H


#include <string>
using std::string;

class Book {
public:
    Book(string name = "", string author = "");
    string name() const;
    string author() const;
private:
    string _name;
    string _author;
};


#endif