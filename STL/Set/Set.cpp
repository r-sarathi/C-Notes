#include <iostream>
#include <set>
using namespace std;

int main()
{
    // Declare a set of integers
    set<int> s;

    // Inserting elements
    s.insert(10);
    s.insert(20);
    s.insert(5);
    s.insert(15);

    // Inserting duplicate elements (which will be ignored)
    s.insert(10);

    // Displaying the elements in the set (in ascending order)
    cout << "Elements in the set: ";
    for (int x : s)
    {
        cout << x << " ";
    }
    cout << endl;

    // Finding an element
    int key = 15;
    auto it = s.find(key);
    if (it != s.end())
    {
        cout << key << " is present in the set." << endl;
    }
    else
    {
        cout << key << " is not present in the set." << endl;
    }

    // Erasing an element
    s.erase(10); // Removes the element 10

    // Checking if an element exists
    key = 10;
    if (s.count(key))
    {
        cout << key << " is present in the set." << endl;
    }
    else
    {
        cout << key << " is not present in the set." << endl;
    }

    // Displaying the elements after deletion
    cout << "Elements in the set after deletion: ";
    for (int x : s)
    {
        cout << x << " ";
    }
    cout << endl;

    // Getting the size of the set
    cout << "Size of the set: " << s.size() << endl;

    // Clearing the set
    s.clear();
    cout << "Size of the set after clearing: " << s.size() << endl;

    return 0;
}
