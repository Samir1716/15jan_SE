#include <stdio.h>

int main()
{
    int rows = 6;
    int i, j;

    // print upper half of pattern
    for(i=1; i<=rows; i++) 
    {
        for(j=1; j<=i; j++) 
        {
            printf("* ");
        }
        printf("\n");
    }

    // print lower half of pattern
    for(i=rows-1; i>=1; i--) 
    {
        for(j=1; j<=i; j++) 
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
