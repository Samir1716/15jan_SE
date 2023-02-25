#include<stdio.h>
int main()
{
    int n, sum=0, FirstDigit, LastDigit;

    printf("\nEnter the number to find sum of First and Last Digit = ");
    scanf("%d", &n);
  
    // Find Last Digit of a number
    LastDigit = n % 10;
    //Find the First Digit by dividing n by 10 until n greater then 10
    while(n >= 10)
    {
        n = n / 10;
    }
    FirstDigit = n;
    //Calculate sum of First and Last Digit
    sum = FirstDigit + LastDigit;
    printf("\nSum of First and Last Digit = %d", sum);
    return 0;
}
