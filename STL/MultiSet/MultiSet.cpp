#include <iostream>
#include <set>
using namespace std;

int main()
{
    // Declare a multiset of integers
    multiset<int> ms;

    // Inserting elements
    ms.insert(10);
    ms.insert(20);
    ms.insert(5);
    ms.insert(15);
    ms.insert(10); // Multiset allows duplicates

    // Displaying the elements in the multiset (in ascending order)
    cout << "Elements in the multiset: ";
    for (int x : ms)
    {
        cout << x << " ";
    }
    cout << endl;

    // Finding an element
    int key = 10;
    auto it = ms.find(key);
    if (it != ms.end())
    {
        cout << key << " is present in the multiset." << endl;
    }
    else
    {
        cout << key << " is not present in the multiset." << endl;
    }

    // Erasing one occurrence of an element
    ms.erase(ms.find(10)); // Removes one occurrence of 10

    // Erasing all occurrences of an element
    ms.erase(10); // Removes all occurrences of 10

    // Displaying the elements after deletion
    cout << "Elements in the multiset after deletion: ";
    for (int x : ms)
    {
        cout << x << " ";
    }
    cout << endl;

    // Getting the size of the multiset
    cout << "Size of the multiset: " << ms.size() << endl;

    // Clearing the multiset
    ms.clear();
    cout << "Size of the multiset after clearing: " << ms.size() << endl;

    return 0;
}

/*

Output:
Elements in the multiset: 5 10 10 15 20
10 is present in the multiset.
Elements in the multiset after deletion: 5 15 20
Size of the multiset: 3
Size of the multiset after clearing: 0

*/