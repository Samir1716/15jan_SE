#include <iostream.h>
#define PI 3.14159 // Define pi constant
using namespace std;

// Function to calculate area of rectangle
float area(float length, float breadth)
{
    return length * breadth;
}

// Function to calculate area of triangle
float area(float base, float height, float)
{
    return 0.5 * base * height;
}

// Function to calculate area of circle
float area(float radius)
{
    return PI * radius * radius;
}

// Main function
int main()
{
    float length, breadth, base, height, radius;

    // Input rectangle dimensions
    cout << "Enter Length and Breadth of Rectangle : ";
    cin >> length >> breadth;

    // Calculate and display area of rectangle
    cout << "Area of Rectangle is : " << area(length, breadth) << endl;

    // Input triangle dimensions
    cout << "Enter Base and Height of Triangle : ";
    cin >> base >> height;

    // Calculate and display area of triangle
    cout << "Area of Triangle is : " << area(base, height) << endl;

    // Input circle dimensions
    cout << "Enter Radius of Circle : ";
    cin >> radius;

    // Calculate and display area of circle
    cout << "Area of Circle is : " << area(radius) << endl;

    return 0;
}
