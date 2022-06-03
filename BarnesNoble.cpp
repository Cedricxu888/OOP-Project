#include <iostream>

#include "BarnesNoble.h"

BarnesNoble::BarnesNoble() {
    numSoldBooks = 0;
}
BarnesNoble::BarnesNoble(string n) {
    name = n;
}
 void BarnesNoble::set_name(string Name) {
     name = Name;
 }
void BarnesNoble::soldBook() {
    numSoldBooks++;
}
string BarnesNoble::get_name() {
    return name;
}
int BarnesNoble::get_numSoldBooks() {
    return numSoldBooks;
}
