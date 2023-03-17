#include <stdio.h>
#include <string.h>

struct employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main() {
    struct employee emp[5];
    int i;

    // read employee details
    for(i=0; i<5; i++) {
        printf("Enter details for employee %d:\n", i+1);
        printf("Employee number: ");
        scanf("%d", &emp[i].empno);
        printf("Employee name: ");
        scanf("%s", emp[i].empname);
        printf("Employee address: ");
        scanf("%s", emp[i].address);
        printf("Employee age: ");
        scanf("%d", &emp[i].age);
    }

    // print employee details
    for(i=0; i<5; i++) {
        printf("Details for employee %d:\n", i+1);
        printf("Employee number: %d\n", emp[i].empno);
        printf("Employee name: %s\n", emp[i].empname);
        printf("Employee address: %s\n", emp[i].address);
        printf("Employee age: %d\n", emp[i].age);
    }

    return 0;
}
