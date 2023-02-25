#include<stdio.h>
#include<conio.h>
int main()
{
  int days, years;
  
  printf("\nEnter the Numbers of Days : ");
  scanf("%d",&days);
  
  years=  days / 365;
  printf("\n\n Number of years is : %d",years);
  return 0;
}
