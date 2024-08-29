#include <iostream>
#include <map>
using namespace std;

int main()
{
    // Declare a map of integers to strings
    map<int, string> mp;

    // Inserting elements into the map
    mp[1] = "Apple";
    mp[2] = "Banana";
    mp[3] = "Cherry";

    // Iterating and displaying the map
    for (const auto &pair : mp)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Finding an element by key
    auto it = mp.find(2);
    if (it != mp.end())
    {
        cout << "Found: " << it->first << ": " << it->second << endl;
    }

    // Erasing an element by key
    mp.erase(2);

    // Displaying the map after deletion
    for (const auto &pair : mp)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}

/*

Output:
1: Apple
2: Banana
3: Cherry
Found: 2: Banana
1: Apple
3: Cherry

*/