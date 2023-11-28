#include <stdio.h>
#include <stdlib.h>
int main()
{

    //r --> read
    //w --> write  (overwrites)
    //a --> append

    FILE *fpointer = fopen("employess.txt", "w");
    fprintf(fpointer, "Jim, Salesmen\nPam, Receptionist");
    fclose(fpointer);

    FILE *fpointer = fopen("employess.txt", "a");
    fprintf(fpointer, "\nJohn, Salesmen\nPanny, Receptionist");
    fclose(fpointer);
    return 0;
}