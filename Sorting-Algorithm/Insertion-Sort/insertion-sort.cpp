/*

Insertion Sort:
    - It is a simple sorting algorithm that works by building a sorted array one element
    at a time. It is considered an "in-place" sorting algorithm, meaning it doesn't require
    any additional memory space beyond teh original array.

Time Complexity:
    - Best Case: O(n)
    - Average Case: O(n^2)
    - Worst Case: O(n^2)

Space Complexity =  O(1)

*/

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    cout << "After sorting an array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {23, 13, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    return 0;
}

/*

Output:
After sorting an array: 1 2 3 13 23

*/