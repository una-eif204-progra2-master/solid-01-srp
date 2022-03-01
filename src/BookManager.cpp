//
// Created by Maikol Guzman Alan on 3/1/22.
//

#include "Book.h"
#include <iostream>
using namespace std;

class BookManager {
public:
    BookManager() {}

    virtual ~BookManager() {

    }

    void save(Book book) {
        cout << "Saving... Title: " + book.getTitle() + ", Author: " + book.getAuthor() << endl;
    }
};