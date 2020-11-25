#include<stdio.h>
    //define constants
    //define preprocessor
    //define identifier value
    #define LENGTH 10
    #define WIDTH 5
    #define NEWLINE '\n'
    int main(){
    printf("Hello\tWorld\n\n"); //character literals
    int area;
    area = LENGTH * WIDTH;
    printf("Value of Area : %d",area);
    printf("%c",NEWLINE);
    return 0;
    //const keyword
    const int length = 10;
    const int width = 20;
    const char newline = '\n';
    int Area = length * width;
    printf("Value of area : %d",area);
    printf("%c",newline);
}