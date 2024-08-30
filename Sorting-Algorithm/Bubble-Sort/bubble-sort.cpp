/*

Bubble Sort:
    - It is the simplest sorting algorithm that works by repeatedly swapping the adjacent
    elements if they are in the wrong order. This algorithm is not suitable for large data sets
    as its average and worst-case time complexity is quite high.

Time Complexity = O(N^2)
Space Complexity = O(1)

*/

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
    cout << "After sorting an array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {13, 23, 1, 3, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    return 0;
}

/*

Output:
After sorting an array: 1 2 3 6 13 23

*/