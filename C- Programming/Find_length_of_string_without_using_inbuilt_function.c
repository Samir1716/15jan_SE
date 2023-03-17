#include <stdio.h>

int main()
{
    char str[100];
    int len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[len] != '\0')
    {
        len++;
    }

    printf("Length of the string: %d", len);

    return 0;
}
