//
// Created by Maikol Guzman Alan on 3/1/22.
//

#include "Book.h"

Book::Book() {}

Book::Book(const string &title, const string &author) : title(title), author(author) {}

const string &Book::getTitle() const {
    return title;
}

void Book::setTitle(const string &title) {
    Book::title = title;
}

const string &Book::getAuthor() const {
    return author;
}

void Book::setAuthor(const string &author) {
    Book::author = author;
}

Book::~Book() {

}
