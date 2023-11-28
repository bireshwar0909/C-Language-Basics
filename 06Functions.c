#include <stdio.h>

//function one
int cube(int num1)
{
    int cubeDone = num1 * num1 * num1;
    return cubeDone;
}

//function two but without any return statement
void sayHi(char name[], int age)
{
    printf("hello %s, you are %d\n", name, age);
}

//function three
int multiply(int h1, int h2)
{
    int h11 = h1;
    int h12 = h2;
    int cal = h1 * h2;
    return cal;
}

int main()
{
    //calling function two
    sayHi("Tom", 15);

    //calling function one but with the help of a variable because the function got a return statement.
    //so the function will return value that will be stored in the variable which we have to print later.
    int result = cube(20);
    printf("%d\n", result);

    //calling the third function.
    int newResult = multiply(4, 5);
    printf("%d", newResult);
    return 0;
}