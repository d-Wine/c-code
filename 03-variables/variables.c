#include <stdio.h>

// declare variable
extern int a,b;
extern int c;
extern float f;

int main(){
    //variable definition
    int a,b;
    int c;
    float f;
    // initialize variable
    a = 10;
    b = 20;
    c = a + b;
    printf("Value of a : %d \n",a);
    printf("Value of b : %d \n",b);
    printf("Value of c : %d \n ",c);
    f = 22.0/7.0;
    printf("Value of f : %f \n",f);
    return 0;
}