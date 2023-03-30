#include <iostream.h>

template <typename T>
void selectionSort(T arr[], int n)
{
    int i, j, min_idx;
    
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        T temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    std::cout << "Integer : " << std::endl;
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    std::cout << "Array Before Sorting: ";
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
    
    selectionSort(arr, n);
    
    std::cout << "Array After Sorting: ";
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    std::cout << "Float : " << std::endl;
    float arr2[] = {3.14f, 2.718f, 1.618f, 0.707f};
    int m = sizeof(arr2)/sizeof(arr2[0]);
    
    std::cout << "Array Before Sorting: ";
    for (int i = 0; i < m; i++)
        std::cout << arr2[i] << " ";
    std::cout << std::endl;
    
    selectionSort(arr2, m);
    
    std::cout << "Array After Sorting: ";
    for (int i = 0; i < m; i++)
        std::cout << arr2[i] << " ";
    std::cout << std::endl;
    
    return 0;
}
