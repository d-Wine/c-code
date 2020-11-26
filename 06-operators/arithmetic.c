#include<stdio.h>
int main(){
    int a = 21;
    int b = 10;
    int c;
    c = a + b;
    printf("a + b : %d\n",c);
    c = a - b;
    printf("a - b : %d\n",c);
    c = a * b;
    printf("a * b : %d\n",c);
    c = a / b;
    printf("a / b : %d\n",c);
    c = a % b;
    printf("a % b : %d\n",c);
    c = a++;
    printf("a-- : %d\n",c);
    c = a--;
    printf("a++ : %d\n",c);
    return 0;
}