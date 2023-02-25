#include<stdio.h>
void main()
{
  int a[10], n;
  int i, odd=0, even=0, odd_sum=0, even_sum=0;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  for (i=0;i<n;i++)
  {
    printf("Enter element numbered: ",i+1);
    scanf("%d", &a[i]);
    if(a[i]%2==1)
    {
       odd_sum = odd_sum + a[i];
       odd++;
    }
    else
    {
       even_sum = even_sum + a[i];
       even++;
    }
  }

  printf("Odd: %d\n", odd);
  printf("Even: %d\n", even) ;
  printf("Sum of Odd Numbers: %d\n", odd_sum);
  printf("Sum of Even Numbers: %d\n", even_sum);
  getch();
}
