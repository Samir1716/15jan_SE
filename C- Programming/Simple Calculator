// C Program to Make a Simple Calculator

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	float a, b;
	while (1) 
  {
		printf("Enter an operator (+, -, *, /) : ");
		scanf(" %c", &ch);

		if (ch == 'x')
			exit(0);
      
		printf("Enter two first and second operand: ");
		scanf("%f %f", &a, &b);
		
    // For Addition
		if (ch == '+')
    {
			printf("f + f = f\n", a, b, a + b);
		}
    
    // For Subtraction
		else if (ch == '-') 
    {			
			printf("f - f = f\n", a, b, a - b);
		}
    
    // For Multiplication
		else if (ch == '*') 
    {
			printf("f * f = f\n", a, b, a * b);
		}
    
    // For Division
		else if (ch == '/') 
    {
			printf("f / f = f\n", a, b, a / b);
		}
    
		else 
    {
			// If operator doesn't match any case constant
			printf("Error! Please write a valid operator\n");
		}
	}
}
