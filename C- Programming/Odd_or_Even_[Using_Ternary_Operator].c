#include < stdio.h >  
int main()  
{  
    int n;  
    printf("Enter an Integer Number\n");  
    scanf("%d", &n);  
  
    (n % 2 == 0) ?  
    (printf("%d is Even Number..\n", n)) :  
    (printf("%d is Odd  Number..\n", n));  
  
    return 0;  
}  
