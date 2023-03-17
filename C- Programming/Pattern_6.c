#include <stdio.h>

int main() {
    int rows = 5;
    int i, j;

    for(i=1; i<=rows; i++) {
        char ch = 'A';
        for(j=1; j<=i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}
