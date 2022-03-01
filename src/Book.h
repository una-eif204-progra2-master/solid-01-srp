//
// Created by Maikol Guzman Alan on 3/1/22.
//

#ifndef MY_PROJECT_NAME_BOOK_H
#define MY_PROJECT_NAME_BOOK_H
#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;

    Book();

    Book(const string &title, const string &author);

    virtual ~Book();

    const string &getTitle() const;

    void setTitle(const string &title);

    const string &getAuthor() const;

    void setAuthor(const string &author);

};


#endif //MY_PROJECT_NAME_BOOK_H
