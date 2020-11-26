#include<stdio.h>
int count;
extern void writen_extern();
main(){
    count = 5;
    writen_extern();
}