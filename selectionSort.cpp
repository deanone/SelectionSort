#include <iostream>

void swap(int* arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// iterative implementation
void selectionSort(int* arr, int n)
{
    for (int i = 0; i < (n - 1); i++)
    {
        int jMin = i;
        for (int j = (i + 1); j < n; j++)
        {
            if (arr[j] < arr[jMin])
            {
                jMin = j;
            }
        }

        if (jMin != i)
        {
            swap(arr, i, jMin);
        }

        for (int k = 0; k < n; k++)
        {
            std::cout << arr[k] << " ";
        }
        std::cout << "\n";
    }
}

int main(int argc, char** argv)
{
    int arr[] = {4, 1, 2, 6, 8, 7, 11, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Unsorted array:\n";
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    selectionSort(arr, n);

    std::cout << "Sorted array:\n";

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    return 0;
}