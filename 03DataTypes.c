#include <stdio.h>

int main()
{

    int age = 40;
    double age2 = 40.2;
    float age3 = 40.233;
    long age4 = 1234567890;
    short age5 = 1;

    char character1 = 'D';
    char phrase[] = "abcdefg"; //string
    
    printf("this is how we print a decimal value\n");
    printf("we just simply use percent_f \n");
    printf("the decimal value is %f\n", age3);

    //%c helps to print a single character
    printf("Printing character %c", character1);


    return 0;
}