#include <cmath> 

class mant {
protected:
    int n; //ìàíòèñà 
    int e; //ýêñïîíåíòà
public:
    mant(const mant& a) {
        n = a.n;
        e = a.e;
    }
    mant(double d = 1, int ex = 0) {
        if (d == 0) {
            printf("ÄÅËÅÍÈÅ ÍÀ ÍÎËÜ");
            _Exit(0);
        }
        e = ex;
        while (abs(d) >= 1) { //module
            d = d / 10;
            e++;
        }
        while (0.1 > abs(d)) {
            d = d * 10;
            e--;
        }
        n = (int)(d * 1000);
        e = e - 3;
    };
    void print();
    friend mant operator +(mant, mant);
    friend mant operator -(mant, mant);
    friend mant operator *(mant, mant);
    friend mant operator /(mant, mant);
};