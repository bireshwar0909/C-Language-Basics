#include <stdio.h>

int main()
{
    //declearing a string
    char characterName[] = "John";
    int characterAge = 35;

    printf("There was once a man with name %s \n", characterName);      // %s is a placeholder for string
    printf("and his age was %d \n", characterAge);                      // %d is a placeholder for numeric character
    printf("\n");

    printf("There was once a man with name %s \n", characterName);
    printf("and his age was %d \n", characterAge);
    printf("\n");

    characterAge = 40;  //updating the characterAge
    printf("Now john is %d years old", characterAge);

    //it is really important to ad \n at the end of every printf else every line will be printed in the same line.

    return 0;
}