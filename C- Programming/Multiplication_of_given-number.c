#include <stdio.h>
int main()
{
  int n;
  printf("Enter an Integer: ");
  scanf("%d", &n);

  printf("\nMultiplication Table Of %d : ", n);
  for (int i = 1; i <= 10; i++) 
  {
    printf("%d * %d = %d \n", n, i, n * i);
  }
  return 0;
}
