#include <iostream>
#include <map>
using namespace std;

int main()
{
    // Declare a multimap of integers to strings
    multimap<int, string> mmp;

    // Inserting elements into the multimap
    mmp.insert({1, "Apple"});
    mmp.insert({2, "Banana"});
    mmp.insert({2, "Blueberry"});
    mmp.insert({3, "Cherry"});

    // Iterating and displaying the multimap
    for (const auto &pair : mmp)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Finding elements by key (range of elements with the same key)
    auto range = mmp.equal_range(2);
    cout << "Elements with key 2:" << endl;
    for (auto it = range.first; it != range.second; ++it)
    {
        cout << it->first << ": " << it->second << endl;
    }

    // Erasing an element by key
    mmp.erase(2);

    // Displaying the multimap after deletion
    for (const auto &pair : mmp)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}

/*

Output:
1: Apple
2: Banana
2: Blueberry
3: Cherry
Elements with key 2:
2: Banana
2: Blueberry
1: Apple
3: Cherry

*/