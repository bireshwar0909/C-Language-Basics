#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//in strucks we can store integers, strings, characters, double and floats.
//Its a old version of class that we learned in C++

struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
    
};

void main() {

    struct Student student1;
    student1.age = 50;
    student1.gpa = 6.7;
    
    strcpy( student1.name, "John");
    strcpy( student1.major, "Computer Science");

    printf("%f", student1.gpa);


}