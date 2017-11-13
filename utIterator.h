#ifndef UTITERATOR_H
#define UTITERATOR_H


#include <iostream>
using std::cout;
using std::endl;;
#include "./include/book.h"
#include "./include/iterator.h"
#include "./include/aggregate.h"
#include "./include/bookShell.h"
#include "./include/bookIterator.h"


TEST(Book, book_name_author) {
    Book b("name", "author");
    ASSERT_EQ("name", b.name());
    ASSERT_EQ("author", b.author());
}

TEST(BookShell, add_book) {
    BookShell shell;
    shell.add(new Book("name", "author"));
    shell.add(new Book("name", "author"));
    shell.add(new Book("name", "author"));
    ASSERT_EQ(3, shell.size());
}

TEST(BookIterator, is_next) {
    BookShell shell;
    shell.add(new Book("one piece", "gd"));
    shell.add(new Book("bang bang bang", "top"));
    shell.add(new Book("leader", "paul"));
    Iterator *it = shell.createIterator();
    while (it->hasNext()) {
        Book *b = it->currentBook();
        cout << "Book Name is: " << b->name() << ", Author is: " << b->author() << endl;
    }
}

#endif