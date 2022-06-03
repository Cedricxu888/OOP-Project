#include <iostream>

using namespace std;
#include "BookStore.h"
#include "BarnesNoble.h"

int main() {
    BarnesNoble b1;
    b1.set_name("Time");
    b1.soldBook();
    cout << "The name of book is: " << b1.get_name() << "The booksold is :" << b1.get_numSoldBooks() << endl;
    return 0;
}
