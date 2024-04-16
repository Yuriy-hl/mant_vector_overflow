#include "mant.h" 

class dif :public mant {
protected:
    int CF = 0; //��� ���������� � ����������
    void owerflow(void); 
public:
    dif(mant a) :mant(a) {//����������� �����
        owerflow();
    }
    dif(double d = 1, int ex = 0) :mant(d, ex) {
        owerflow();
    };
    void print();
    friend dif operator +(dif, dif);
    friend dif operator -(dif, dif);
    friend dif operator *(dif, dif);
    friend dif operator /(dif, dif);
    friend char operator !=(dif, dif);
};
