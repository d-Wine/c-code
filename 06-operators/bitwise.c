#include<stdio.h>
int main(){
    unsigned int a = 60;
    unsigned int b = 13;
    int c = 0;
    c = a & b;      // and operator
    printf("Value of c : %d\n",c);
    c = a | b;      // or operator
    printf("Value of c : %d\n",c);
    c = a ^ b;      // xor operator
    printf("Value of c : %d\n",c);
    c = ~a;         // not operator
    printf("Value of c : %d\n",c);
    c = a << 2;     //  left shift
    printf("Value of c : %d\n",c);
    c = a >> 2;     //  right shift
    printf("Value of c : %d\n",c);
}