#include <stdio.h>
#include <string.h>

struct employee 
{
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main() 
{
    struct employee emp;

    // read employee details
    printf("Enter employee number: ");
    scanf("%d", &emp.empno);
    printf("Enter employee name: ");
    scanf("%s", emp.empname);
    printf("Enter employee address: ");
    scanf("%s", emp.address);
    printf("Enter employee age: ");
    scanf("%d", &emp.age);

    // print employee details
    printf("Employee number: %d\n", emp.empno);
    printf("Employee name: %s\n", emp.empname);
    printf("Employee address: %s\n", emp.address);
    printf("Employee age: %d\n", emp.age);

    return 0;
}
