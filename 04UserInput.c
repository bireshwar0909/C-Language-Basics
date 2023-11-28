#include <stdio.h>
#include <stdlib.h> //probably for user input

//scanf does not include space in between the strings
//meaning while inputing through terminal we can only use inputs without space
//in order orders we cant input a line only a single character, word, integer.
//and for that issue we use fgets() !!!

int main()
{
    int age;
    printf("Enter your age: \n");
    scanf("%d", &age);  //& means we are telling the compiler that hey we wanna store the input in that perticular variable
    printf("You are %d years old\n", age);

    int gpa;
    printf("Enter you gpa: \n");
    //%lf helps to look for a double
    scanf("%f", &gpa);
    printf("Your GPA is %f \n", gpa);

    char name[20];      // 20 means that a maximum of 20 characters the name variable can hold
    printf("Enter your name: \n");
    scanf("%s", name);  //%s helps to provide an value for the string
    printf("Your name is %s\n", name);

    char newName[20];
    printf("Enter your name: \n");
    fgets(newName, 20, stdin); //where stdin means standard input
    printf("Your name is %s", newName);

    return 0;
}