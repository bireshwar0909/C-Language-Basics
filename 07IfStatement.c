#include <stdio.h>

//function one
void theNotOperator(int num1, int num2){
    //here we see the or operator "||" along with the not operator "!"
    if (!num1 == 10 || !num2 == 10)
    {
        printf("Hey you havent got a 10\n");
    } else {
        printf("Better luck next time!\n");
    }    
}

//function two
void theOrOperator(int num1, int num2){
    //here we see the or operator "||"
    if (num1 == 10 || num2 == 10)
    {
        printf("Hey you have got a 10\n");
    } else {
        printf("Better luck next time!\n");
    }    
}

//function three
//returns the biggest number between three numbers
int maxThree(int num1, int num2, int num3){
    //here we see the and operator "&&"
    if (num1 == num2 && num2 == num3)
    {
        printf("Hey your numbers are all same");
    }

    if (num1 >= num2 && num1 >= num3)
    {
        return num1;
    }

    if (num2 >= num1 && num2 >= num3)
    {
        return num2;
    }

    if (num3 >= num2 && num3 >= num1)
    {
        return num3;
    }
}

//function four
//returns the bigger number between two numbers
int max(int num1, int num2)
{
    int result;
    if (num1 > num2)
    {
        result = num1;
    }
    else
    {
        result = num2;
    }
    return result;
}

int main()
{
    printf("%d\n", max(20, 30));
    printf("%d\n", maxThree(20, 30, 40));
    theOrOperator(10,30);
    theNotOperator(10,10);
    return 0;
}