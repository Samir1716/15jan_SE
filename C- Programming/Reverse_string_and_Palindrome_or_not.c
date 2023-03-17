#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100], rev_str[100];
    int len, i, j, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // reverse the string
    for(i=len-1, j=0; i>=0; i--, j++) 
    {
        rev_str[j] = str[i];
    }
    rev_str[len] = '\0';

    // check if the string is a palindrome
    for(i=0; i<len; i++) 
    {
        if(str[i] != rev_str[i]) 
        {
            flag = 0;
            break;
        }
    }

    if(flag)
    
    {
        printf("The string is a palindrome");
    } 
    else
    {
        printf("The string is not a palindrome");
    }

    return 0;
}
