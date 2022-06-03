#ifndef BOOKSTORE_H
#define BOOKSTORE_H

#include <string>

using namespace std;

class BookStore {
  public:
    BookStore();
    BookStore(string n, string a, int b);  // creates a BookStore name n, address
    void set_name (string Name);
    string get_name();
    void set_address(string Address);
    string get_address();
    void set_numBook(int Book); 
    int get_numBook();
    virtual float get_onlineTax() = 0; 
  protected:
    string name;                                   // a, and number of books in the store b                      // the book store name
    string address;                       // the book store address
    int numBook;  // the inventory in the store; takes only non-negative values
};

#endif
