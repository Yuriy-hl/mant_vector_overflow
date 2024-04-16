#include <stdio.h> 
#include "mant.h" 
#include <cmath> 

void mant::print(void) {
    printf("%d*10^%d[%f]\n ", n, e, (n * 1.0 * pow(10, e))); 
}
mant operator+(mant a, mant b) {
    while (a.e > b.e) {
        b.e++;
        b.n = b.n / 10;
    }
    while (b.e > a.e) {
        a.e++;
        a.n = a.n / 10;
    }
    return mant((a.n + b.n), a.e);
}

mant operator-(mant a, mant b) {
    while (a.e > b.e) {
        b.e++;
        b.n = b.n / 10;
    }
    while (b.e > a.e) {
        a.e++;
        a.n = a.n / 10;
    }
    return mant((a.n - b.n), a.e);
}

mant operator*(mant a, mant b) {
    return mant((a.n * b.n), (a.e + b.e));
}

mant operator/(mant a, mant b) {
    return mant(((double)a.n / b.n), (a.e - b.e));
}