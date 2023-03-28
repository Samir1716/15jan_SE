#include <iostream.h>
using namespace std;

inline int multiply(int num1, int num2) 
{
    return num1 * num2;
}

inline int cube(int num)
{
    return num * num * num;
}

int main() 
{
    int num1, num2;
    cout << "Enter Two Numbers: ";
    cin >> num1 >> num2;

    int product = multiply(num1, num2);
    cout << "Multiplication: " << product << endl;

    int num3;
    cout << "Enter a Number to Find its Cube : ";
    cin >> num3;

    int cubeValue = cube(num3);
    cout << "Cubic value: " << cubeValue << endl;

    return 0;
}
