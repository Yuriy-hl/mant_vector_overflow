
#include <stdlib.h> 
#include <iostream> 
#include "vector.h" 

void vector::error(char p) {
    _Exit(p);
}

vector::vector(int s) {
    if (s <= 0) error(1);
    sz = s;
    v = new dif[sz]; //создание massive from dif
    if (v == 0) error(2);
}

vector::~vector() {
    delete v;
}




dif& vector::operator[](int i) { //indexes operator
    if (i < 0 || sz <= i) error(3);
    return v[i];
}

void vector::operator=(const vector& a) {
    int s = a.size();
    for (int i = 0; i < s; i++) {
        elem(i) = a.elem(i);
    }
}

vector::vector(const vector& a) :vector(a.size()) {
    int sz = size();
    for (int i = 0; i <= sz; i++) {
        elem(i) = a.elem(i);
    }
}

void vector::printAll(void) {// print 
    for (int i = 0; i < sz; i++) {
        v[i].print();
    }
}



vector vector::operator+(vector& a) {
    int s = a.size();
    vector sum(s);
    for (int i = 0; i < s; i++) {
        sum.elem(i) = elem(i) + a.elem(i);
    }
    return sum;
}

char vector::operator==(vector& a) {
    int s = size();
    if (size() == a.size()) {
        for (int i = 0; i < s; i++) {
            if (elem(i) != a.elem(i)) {
                return 0;
            }
        }
    }
    else {
        return 0;
    }
    return 1;
}