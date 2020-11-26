#include<stdio.h>
extern int count;
void writen_extern(void){
    printf("count is %d\n",count);
}