#include <stdio.h>
#include <stdlib.h>

int main()
{

    //in order to declear an array we have to mention the type then the name and then sqaure brackets
    int luckyNumbers[] = {4, 8, 15, 32};
    printf("%d\n", luckyNumbers[2]);
    luckyNumbers[2] = 20;
    printf("%d\n", luckyNumbers[2]);

    //here we have decleared an array with 5 in between the square brackets meaning
    //the array can hold a maximum of 5 elements
    int luckyNumbers1[5];
    luckyNumbers1[0] = 1;       //declearing the first element
    luckyNumbers1[1] = 2;
    luckyNumbers1[2] = 3;
    luckyNumbers1[3] = 4;
    luckyNumbers1[4] = 5;

    printf("%d", luckyNumbers1[1]);

    return 0;
}