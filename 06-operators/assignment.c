#include<stdio.h>
int main(){
    int a = 21;
    int c;
    c = a;
    printf("Value of c : %d\n",c);
    c += a;
    printf("Value of c : %d\n",c);
    c -= a;
    printf("Value of c : %d\n",c);
    c *= a;
    printf("Value of c : %d\n",c);
    c /= a;
    printf("Value of c : %d\n",c);
    c = 200;
    c %= a;
    printf("Value of c : %d\n",c);
    c >>= 2;
    printf("Value of c : %d\n",c);
    c <<= 2;
    printf("Value of c : %d\n",c);
    c &= 2;
    printf("Value of c : %d\n",c);
    c ^= 2;
    printf("Value of c : %d\n",c);
    c |= 2;
    printf("Value of c : %d\n",c);
    return 0;
}