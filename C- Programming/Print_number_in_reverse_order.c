#include <stdio.h>
int main()
{

  int n, reverse = 0, remainder;

  printf("Enter an Integer: ");
  scanf("%d", &n);

  while (n != 0) 
  {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  printf("Reversed Number = %d", reverse);

  return 0;
}
