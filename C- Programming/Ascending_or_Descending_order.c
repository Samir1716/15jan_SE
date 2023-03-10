#include<stdio.h>

int main()
{
 int i,j,a,n,ch;
 int number[100];
  
 printf("Enter the Size of Array : \n");
 scanf("%d",&n);

 printf("Enter the Array Elements : \n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&number[i]);
 }
    printf("Press 1. For ASCENDING ORDER\n");
    printf("Press 2. For DESCENDING ORDER\n");
    printf("Enter Your Choice:\n");
    scanf("%d",&ch);
  switch(ch)
  {
    case 1:  
      for(i=0;i<n;i++)
      {
         for(j=i+1;j<n;j++)
         {
            if(number[i]>number[j])
            {
	             a=number[i];
	             number[i]=number[j];
	             number[j]=a;
            }
        }
     }
      printf("\nThe numbers arranged in ascending order are given below : \n");
      for(i=0;i<n;i++)
      {
        printf("%d\n",number[i]);
      }
      break;
     
    case 2:
      for(i=0;i<n;i++)
	    {
	       for(j=i+1;j<n;j++)
	       {
	          if(number[i]<number[j])
		        {
		           a=number[i];
		           number[i]=number[j];
		           number[j]=a;
		        }
	       }
    	}
      printf("\nThe numbers arranged in descending order are given below : \n");
      for(i=0;i<n;i++)
	    {
	       printf("%d\n",number[i]);
	    }
	    break;
      default:printf("\n INVALID CHOICE \n");
      break;
    }

 return 0;
}
