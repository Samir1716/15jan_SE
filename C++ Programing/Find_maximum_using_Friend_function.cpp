 #include <iostream.h>
using namespace std;

class MaxNumbers 
{
    int num1, num2;

public:
    // Constructor to initialize values
    MaxNumbers(int n1, int n2) 
    {
        num1 = n1;
        num2 = n2;
    }

    // Friend function to find the maximum of two numbers
    friend int findMax(MaxNumbers &mn);
};

int findMax(MaxNumbers &mn) 
{
    return (mn.num1 > mn.num2) ? mn.num1 : mn.num2;
}

int main() 
{
    int n1, n2;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    // Create an object of the class
    MaxNumbers mn(n1, n2);

    // Find the maximum using friend function
    int max = findMax(mn);

    // Display the maximum number
    cout << "The maximum number is: " << max;

    return 0;
}
