#ifndef DYMOCKS_H
#define DYMOCKS_H

#include "BookStore.h"

class Dymocks : public BookStore {
    public:
        Dymocks();            // Uses the default constructor of parent
        Dymocks(bool o);      // sets isOnline attribute with o
                     // calls the parent class constructor with name=="Dymocks" and numBook==1000 and
                     // and address equal to the empty string
        void increment();
        void set_storeID(int id);
        int get_storeID();
        void set_isOnline(bool online);
        bool get_isOnline();
        void set_nextNumStores(int next);
        int get_nextNumStores();
        virtual float get_onlineTax() override;
    protected:
        int storeID;          // unique store ID 
        bool isOnline;       // class attribute
    private:
        static int nextNumStores;

};

#endif
