#include <stdio.h>
#include <stdlib.h>

void main()
{
    // declearing a variable of char type holding 'A'
    char grade = 'A';
    switch (grade)      //telling the compiler that we will be switching the value of grade
    {
    case 'A':           //if the value of the grade is A then the code below but above break will be executed
        printf("Dude you are great!");
        break;
    case 'B':           //if the value of the grade is B then the code below but above break will be executed
        printf("Dude improve!");
        break;
    case 'C':           //if the value of the grade is C then the code below but above break will be executed
        printf("Go study");
        break;
    case 'D':           //if the value of the grade is D then the code below but above break will be executed
        printf("Failed");
        break;
    default :           //if the value is anything other than A, B, C, D then this will print out
        printf("What is this?");
    }
}