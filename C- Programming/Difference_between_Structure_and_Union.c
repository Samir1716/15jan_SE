#include <stdio.h>
#include <string.h>

// define a structure to represent a person
struct Person 
{
    char name[50];
    int age;
    char address[100];
};

// define a union to represent a number
union Number 
{
    int i;
    float f;
    char c;
};

int main() 
{
    struct Person p1;
    union Number n1;

    // set values for structure fields
    strcpy(p1.name, "Samir");
    p1.age = 23;
    strcpy(p1.address, "10,XYZ Society, Ahemdabad");

    // set values for union fields
    n1.i = 24;

    // print structure fields
    printf("Structure values:\n");
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Address: %s\n", p1.address);

    // print union fields
    printf("\nUnion values:\n");
    printf("Integer value: %d\n", n1.i);
    n1.f = 3.14;
    printf("Float value: %f\n", n1.f);
    n1.c = 'V';
    printf("Character value: %c\n", n1.c);

    return 0;
}
