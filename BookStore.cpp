#include <iostream>

#include "BookStore.h"

BookStore::BookStore() {

}

BookStore::BookStore(string n, string a, int b) {
    name = n;
    address = a;
    numBook = b;
}

void BookStore::set_name(string Name) {
    name = Name;
}

string BookStore::get_name() {
    return name;
}

void BookStore::set_address(string Address) {
    address = Address;
}

string BookStore::get_address() {
    return address;
}

void BookStore::set_numBook(int Book) {
    numBook = Book;
}

int BookStore::get_numBook() {
    return numBook;
}
