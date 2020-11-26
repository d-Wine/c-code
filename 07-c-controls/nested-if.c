#include<stdio.h>
int main(){
    int a = 100;
    int b = 200;
    if (a >= 100){
        if(b >= 200){
            int c = a * b;
            printf("Value of c  : %d\n",c);
            printf("Value of b  : %d\n",b);
        }
        printf("Value of a : %d\n",a);
    }
    return 0;
}