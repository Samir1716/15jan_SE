#include <stdio.h>  
int main()  
{  
    int a, b;  
    char choice;  
  
    printf("Enter Your Choice : \n");  
    printf("a. Addition\n");
    printf("b. Subtraction\n");
    printf("c. Multiplication\n");
    printf("d. Division\n");  
    scanf("%c", &choice);  
  
  
   printf("Enter 2 Integer Numbers : \n");  
   scanf("%d %d", &a, &b);  
  
  
    switch(choice)  
    {  
        case 'a': printf("%d + %d = %d\n", a, b, (a+b));  
                break;  
  
        case 'b': printf("%d - %d = %d\n", a, b, (a-b));  
                break;  
  
        case 'c': printf("%d x %d = %d\n", a, b, (a*b));  
                break;  
  
        case 'd': if( b != 0)  
                    printf("%d / %d = %d\n", a, b, (a/b));  
                else  
                    printf("Number can't be divided by 0..\n");  
                break;  
  
        default: printf("You Entered Wrong Choice..\n");  
                 break;  
    }  
  
    return 0;  
}  
