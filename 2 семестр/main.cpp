#include <iostream> 
#include "vector.h" 

int main() {
   system("chcp 1251");
   system("cls");
   dif first = 1;
   dif second = 2000;
   dif third;
   first.print();
   printf("\n");
   second.print();
   printf("\n");
   third = first + second;
   third.print();
   printf("\n");
   third = first - second;
   third.print();
   printf("\n");
   third = first * second;
   third.print();
   printf("\n");
   third = first / second;
   third.print();


   /* dif first = 1;
    dif second = 2000;


    vector var1(2);
    var1[0] = first;
    var1[1] = second;
    printf("������\n");
    var1.printAll();


    vector var2 = var1;
    printf("\n������ ����� =\n");
    var2.printAll();

    printf("\n������ ����� �����\n");
    vector var3(var2);
    var3.printAll();
    printf("\n\n");
    var1 = var1 + var2;
    if (var1 == var2) printf("\n\t��� ����������\n");
    else {
        printf("\n\t��� �� �����\n");
        var1.printAll();
    }*/
};
