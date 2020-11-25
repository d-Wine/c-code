#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(){
    //INTEGER TYPES
    printf("Storage size for int : %d \n",sizeof(int)); // int 2 or 4 bytes
    printf("Storage size for char : %d \n",sizeof(char)); // char 1 byte
    printf("Storage size for short : %d \n",sizeof(short)); // short 2 bytes
    printf("Storage size for long : %d \n",sizeof(long)); // long 4 bytes
    //FLOATING-POINT TYPES
    printf("Storage size for short : %d \n",sizeof(float)); // float 4 bytes
    printf("Minimum float positive value : %E \n",FLT_MIN);
    printf("Maximum float positive value : %E \n",FLT_MAX);
    printf("Precision value : %d\n",FLT_DIG);
    return 0;
}