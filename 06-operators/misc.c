#include<stdio.h>
int main()
{
    int a = 4;
    short b;
    double c;
    int* ptr;
    printf("Size of a : %d\n",sizeof(a));
    printf("Size of b : %d\n",sizeof(b));
    printf("Size of c : %d\n",sizeof(c));

    ptr = &a;
    printf("value of a is %d\n",a);
    printf("*ptr is %d\n",*ptr);

    a = 10;
    b = (a == 1) ? 20: 30;
    printf( "Value of b is %d\n", b );
    b = (a == 10) ? 20: 30;
    printf( "Value of b is %d\n", b );
}