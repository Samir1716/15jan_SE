#include <stdio.h>

int main() 
{
    int rows = 4;
    
    for(int i=0; i<=rows; i++) 
    {
        for(int j=0; j<=i; j++) 
        {
            if(j%2 == 0) 
            {
                printf("1 ");
            }
            else 
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
