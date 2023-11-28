#include <stdio.h>
#include <stdlib.h>

void main()
{

    //declearing a while loop
    int index = 1;
    while (index <= 5)
    {
        printf("%d\n", index);
        index++;
    }

    // In the while statement, first a counter is initialized which undergoes a test condition. 
    // If the condition evaluates to true, then the body of the loop gets executed. 
    // Hence, while loop runs until the condition becomes false.
//-----------------------------------------------------------------------------------------------------//

    //declearing a for loop
    int index1 = 1;
    do
    {
        printf("%d\n", index1);
        index1++;
    } while (index1 <= 5);

    // In the do-while statement, first the instructions in the do block are executed and 
    // then the condition in the while block is tested. So, the do while statement will
    // at least execute the code once, even if the condition is false at the very first time.
//-----------------------------------------------------------------------------------------------------//

    //declearing a do while loop
    for (int i = 0; i < 5; i++)
    {
        printf ("%d\n", i);
    }

    // The for loop is the most used repetition statement in almost all programming languages.
    // The reason for its popularity is that it does three jobs at once.
    // It initializes the counter, tests the condition and increments/decrements the counter at the same time.
    
}