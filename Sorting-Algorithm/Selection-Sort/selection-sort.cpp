/*

Selection Sort:
    - Selection sort is a simple and efficient sorting algorithm that works by repeatedly
    selecting the smallest (or largest) element from the unsorted portion of the list
    and moving it to the sorted portion of the list and moving it to the sorted portion of
    the list.

Time Complexity = O(N^2)
Space Complexity = O(1)

*/

#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    int minIndex = 0;
    for (int i = 0; i <= size - 2; i++)
    {
        minIndex = i;
        for (int j = i + 1; j <= size - 1; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            swap(arr[minIndex], arr[i]);
        }
    }
    cout << "After sorting an array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {5, 4, 13, 2, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
    return 0;
}

/*

Output:
After sorting an array: 2 4 5 6 13

*/