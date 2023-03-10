#include<stdio.h>
int main()
{
    char str[30];
  
    //Get the Input String
    printf("Enter the String:");
    scanf("%s",str);
    int len=0;
    //calculate string size
    while(str[len]!='\0')
    {
        len++;
    }
    //display the string total length
    printf("Your String length is:%d",len);
  return 0;
}
