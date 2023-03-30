#include <iostream.h>

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    std::cout << "For Integer :" << std::endl;
    int a = 10, b = 20;
    std::cout << "Before Swap: a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "After Swap: a = " << a << ", b = " << b << std::endl;
    
    std::cout << "For Float :" << std::endl;
    float c = 3.14f, d = 2.718f;
    std::cout << "Before Swap: c = " << c << ", d = " << d << std::endl;
    swap(c, d);
    std::cout << "After Swap: c = " << c << ", d = " << d << std::endl;
    
    return 0;
}
