#include<stdio.h>

int main() {

    //BASIC
    int a;
    int *p;     //here we have created a pointer variable

    a = 8;
    p = &a;     //it stored the memory address of a;

    printf("%d\n", a);    //print the value of a

    printf("%d\n", p);    //print the memory address of a
    printf("%d\n", &a);   //print the memory address of a

    //since pointer p is also a variable it also takes some space in the memory
    //so we can also print the memory address of the pointer.
    printf("%d\n", &p);

    //dereferencing the pointer
    printf("%d\n", *p);     //it will print the value of a

    
    //POINTER ARITHMATIC
    int a1 = 10;
    int *p1;
    p1 = &a1;

    printf("%d\n",p1);       //if p is 2002
    printf("%d\n", p1+1);      //then p+1 will be 2006 because of a being an integer taking up 4 bytes of memory.
    printf("Size of integer is %d bytes", sizeof(int));

    printf("Value at adress p1+1 is $d", *(p1+1));  //this should give some unwanted values out.

    return 0;

} 