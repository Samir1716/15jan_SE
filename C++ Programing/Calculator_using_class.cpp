#include <iostream.h>
using namespace std;

class Calculator
{
    public:
        float num1, num2;
        char op;

        void calculate() 
        {
            switch(op) 
            {
                case '+':
                    cout << "Result: " << num1 + num2;
                    break;
                case '-':
                    cout << "Result: " << num1 - num2;
                    break;
                case '*':
                    cout << "Result: " << num1 * num2;
                    break;
                case '/':
                    if(num2 == 0) 
                    {
                        cout << "Error: Division by Zero";
                    } 
                else 
                    {
                        cout << "Result: " << num1 / num2;
                    }
                    break;
                default:
                    cout << "Invalid Operator..!!";
                    break;
            }
        }
};

int main() 
{
    Calculator c;
    cout << "Enter First Number: ";
    cin >> c.num1;
    cout << "Enter Operator (+,-,*,/): ";
    cin >> c.op;
    cout << "Enter Second Number: ";
    cin >> c.num2;
    c.calculate();
    return 0;
}
