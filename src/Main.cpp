//
// Created by Maikol Guzman Alan on 3/1/22.
//

#include "Book.h"
#include "SaveFileManager.cpp"

int main() {
    std::cout << "Welcome to the UNA! (VIRTUAL)\n" << std::endl;

    Book book;
    SaveFileManager saveManager;
    book.setTitle("Programacion 2");
    book.setAuthor("Maikol Guzman Alan");

    // SRP Solution
    saveManager.saveBook(book);

    return 0;
}
