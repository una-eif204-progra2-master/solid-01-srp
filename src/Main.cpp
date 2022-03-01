//
// Created by Maikol Guzman Alan on 3/1/22.
//

#include "Book.h"
#include "BookManager.cpp"

int main() {
    std::cout << "Welcome to the UNA! (VIRTUAL)\n" << std::endl;

    Book book;
    BookManager bookManager;
    book.setTitle("Programacion 2");
    book.setAuthor("Maikol Guzman Alan");

    bookManager.save(book);

    return 0;
}
