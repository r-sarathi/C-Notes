#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    // Declare an unordered_set of integers
    unordered_set<int> us;

    // Inserting elements
    us.insert(10);
    us.insert(20);
    us.insert(5);
    us.insert(15);
    us.insert(10); // Duplicate element, will be ignored

    // Displaying the elements in the unordered_set (no particular order)
    cout << "Elements in the unordered_set: ";
    for (int x : us)
    {
        cout << x << " ";
    }
    cout << endl;

    // Finding an element
    int key = 15;
    auto it = us.find(key);
    if (it != us.end())
    {
        cout << key << " is present in the unordered_set." << endl;
    }
    else
    {
        cout << key << " is not present in the unordered_set." << endl;
    }

    // Erasing an element
    us.erase(10); // Removes the element 10

    // Checking if an element exists
    key = 10;
    if (us.count(key))
    {
        cout << key << " is present in the unordered_set." << endl;
    }
    else
    {
        cout << key << " is not present in the unordered_set." << endl;
    }

    // Displaying the elements after deletion
    cout << "Elements in the unordered_set after deletion: ";
    for (int x : us)
    {
        cout << x << " ";
    }
    cout << endl;

    // Getting the size of the unordered_set
    cout << "Size of the unordered_set: " << us.size() << endl;

    // Clearing the unordered_set
    us.clear();
    cout << "Size of the unordered_set after clearing: " << us.size() << endl;

    return 0;
}

/*

Output:
Elements in the unordered_set: 15 5 20 10
15 is present in the unordered_set.
10 is not present in the unordered_set.
Elements in the unordered_set after deletion: 15 5 20
Size of the unordered_set: 3
Size of the unordered_set after clearing: 0

*/