#include <stdio.h>

int main() {
    int rows = 5;
    int i, j, space;

    for(i=1; i<=rows; i++) {
        // print spaces before each row
        for(space=1; space<=rows-i; space++) {
            printf(" ");
        }

        // print asterisks for current row
        for(j=1; j<=2*i-1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
