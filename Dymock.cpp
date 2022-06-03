#include <iostream>

#include "Dymocks.h"



void Dymocks::increment() {
    storeID++;
}

Dymocks::Dymocks() {
    storeID = 0;
}
int nextNumStores = 0;

Dymocks::Dymocks(bool o) {
    isOnline = o;
}

void Dymocks::set_storeID(int id) {
    storeID = id;
}

int Dymocks::get_storeID() {
    return storeID;
} 

void Dymocks::set_isOnline(bool online) {
    isOnline = online;
}

bool Dymocks::get_isOnline() {
    return isOnline;
}

void Dymocks::set_nextNumStores(int next) {
    nextNumStores = next;
    increment();
}

int Dymocks::get_nextNumStores() {
    return nextNumStores;
}

float Dymocks::get_onlineTax() {
    if (isOnline == true) {
        return 500.0;
    }
    else {
        return 0.0;
    }
}
