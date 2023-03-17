#include <stdio.h>

int main() 
{
    int rows = 5;
    int count = 65;
    
    for(int i=0; i<rows; i++) 
    {
        for(int j=0; j<=i; j++)
        {
            printf("%c ", count);
            count++;
        }
        printf("\n");
    }
    
    return 0;
}
