#ifndef BARNESNOBLE_H
#define BARNESNOBLE_H

#include "BookStore.h"

class BarnesNoble : public BookStore {

    public:
        BarnesNoble();          // inherit from base class default constructor    
        BarnesNoble(string n);  // set name n  
                       // should call the corresponding constructor from the parent class
                       // with the online parameter being false 
        void soldBook();   // increments numSoldBooks
        int get_numSoldBooks(); // returns the books sold
        void set_name(string Name);
        string get_name();
        float get_onlineTax();
    protected:
        int numSoldBooks;   // attribute for numSoldBooks, initialised to 0
        string name;
};

#endif
