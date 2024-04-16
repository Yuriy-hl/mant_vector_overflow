#include <stdio.h> 
#include "dif.h" 
#include <cmath> 

void dif::owerflow(void) {
    if (e > 0) {
        CF = 1;
        e = 0;
        n = 999;
    }
    else if (e < -3) {
        CF = 2;
        n = 1;
        e = -3;
    }
}
void dif::print(void) {
    if (CF == 1) { printf("**"); }
    else if (CF == 2) { printf("$$"); }
    mant::print();
}


dif operator+(dif a, dif b) {
    return dif(mant(a) + mant(b));
}

dif operator-(dif a, dif b) {
    return dif(mant(a) - mant(b));
}

dif operator*(dif a, dif b) {
    return dif(mant(a) * mant(b));
}

dif operator/(dif a, dif b) {
    return dif(mant(a) / mant(b));
}

char operator!=(dif a, dif b) {
    if ((a.n == b.n) && (a.e == b.e)) {
        return 1;
    }
    else return 0;
}