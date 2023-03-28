#include <iostream>
using namespace std;

class Calculator 
{
    private:
        int num1, num2;
    
    public:
        Calculator(int n1, int n2) 
        {
            num1 = n1;
            num2 = n2;
        }
        
        int add() 
        {
            return num1 + num2;
        }
        
        int subtract()
        {
            return num1 - num2;
        }
        
        double divide() 
        {
            if(num2 == 0) 
            {
                cout << "Error: Division by zero" << endl;
                return 0;
            } else {
                return static_cast<double>(num1) / num2;
            }
        }
        
        int multiply() 
        {
            return num1 * num2;
        }
};

int main()
{
    int n1, n2;
    cout << "Enter Two Numbers: ";
    cin >> n1 >> n2;

    Calculator myCalc(n1, n2);

    int sum = myCalc.add();
    cout << "Addition: " << sum << endl;

    int diff = myCalc.subtract();
    cout << "Subtraction: " << diff << endl;

    int product = myCalc.multiply();
    cout << "Multiplication: " << product << endl;

    double quotient = myCalc.divide();
    cout << "Division: " << quotient << endl;

    return 0;
}
