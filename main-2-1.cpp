#include <iostream>

using namespace std;
#include "BookStore.h"
#include "Dymocks.h"

int main() {
    Dymocks d1;
    d1.set_address("the university of adelaide");
    d1.set_isOnline(true);
    d1.set_name("Life");
    d1.set_storeID(3);
    cout << "The name is: " << d1.get_name() << "The state of this book is :" << d1.get_isOnline() 
    << "The id of this book is : " << d1.get_storeID() << "The address of this book on : " << d1.get_address() << endl;

    return 0;
}
