//
// Created by Maikol Guzman Alan on 3/1/22.
//

#include "Book.h"
#include <iostream>
using namespace std;

class SaveFileManager {
public:
    SaveFileManager() {}

    virtual ~SaveFileManager() {

    }

    void saveBook(Book book) {
        cout << "Saving... Book Title: " + book.getTitle() + ", Author: " + book.getAuthor() << endl;
    }
};