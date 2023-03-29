#include <iostream.h>

// Function overloading for addition
int add(int a, int b) 
{
    return a + b;
}

float add(float a, float b) 
{
    return a + b;
}

// Function overloading for subtraction
int sub(int a, int b) 
{
    return a - b;
}

float sub(float a, float b) 
{
    return a - b;
}

// Function overloading for multiplication
int mul(int a, int b) 
{
    return a * b;
}

float mul(float a, float b)
{
    return a * b;
}

// Function overloading for division
int div(int a, int b) 
{
    return a / b;
}

float div(float a, float b)
{
    return a / b;
}

int main()
{
    int num1 = 10, num2 = 5;
    float num3 = 2.5, num4 = 1.5;

    // Perform integer addition, subtraction, multiplication, and division
    cout << "Integer Addition: " << add(num1, num2) << endl;
    cout << "Integer Subtraction: " << sub(num1, num2) << endl;
    cout << "Integer Multiplication: " << mul(num1, num2) << endl;
    cout << "Integer Division: " << div(num1, num2) << endl;

    // Perform float addition, subtraction, multiplication, and division
    cout << "Float Addition: " << add(num3, num4) << endl;
    cout << "Float Subtraction: " << sub(num3, num4) << endl;
    cout << "Float Multiplication: " << mul(num3, num4) << endl;
    cout << "Float Division: " << div(num3, num4) << endl;

    return 0;
}
