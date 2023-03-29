#include <iostream.h>
using namespace std;

class SwapNumbers 
{
    int num1, num2;

public:
    // Constructor to initialize values
    SwapNumbers(int n1, int n2) 
    {
        num1 = n1;
        num2 = n2;
    }

    // Friend function to swap numbers
    friend void swap(SwapNumbers &sn);
};

void swap(SwapNumbers &sn) 
{
    sn.num1 = sn.num1 ^ sn.num2;
    sn.num2 = sn.num1 ^ sn.num2;
    sn.num1 = sn.num1 ^ sn.num2;
}

int main() 
{
    int n1, n2;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    // Create an object of the class
    SwapNumbers sn(n1, n2);

    // Swap the numbers using friend function
    swap(sn);

    // Display the swapped numbers
    cout << "After swapping, the numbers are: " << sn.num1 << " " << sn.num2;

    return 0;
}
