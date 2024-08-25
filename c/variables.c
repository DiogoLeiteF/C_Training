#include <stdio.h>

int main(){

    int x; // declaration
    x = 1; // initialization
    int y = 321; // declaration + initialization

    float gpa = 2.05;
    char grade = 'C';
    char name[] = "John"; 

    printf("Hello %s \n", name);
    printf("You are %d years old \n", y);
    printf("your grade is %c \n", grade);
    printf("your gpa is %f \n", gpa);


    return 0;
}