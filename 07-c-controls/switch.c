#include<stdio.h>
int main(){
    char grade = 'B';
    switch (grade)
    {
    case 'A':
        printf("Excellent\n");
        break;
    case 'B':
        printf("Well done");
        break;
    case 'C':
        printf("Not Bad\n");
        break;
    case 'D':
        printf("You Pass\n");
        break;
    case 'E':
        printf("Try again please\n");
        break;
    default:
        printf("Invalid grade");
    }
    return 0;
}