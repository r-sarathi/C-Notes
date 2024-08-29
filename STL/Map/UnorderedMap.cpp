#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    // Declare an unordered_map of integers to strings
    unordered_map<int, string> ump;

    // Inserting elements into the unordered_map
    ump[1] = "Apple";
    ump[2] = "Banana";
    ump[3] = "Cherry";

    // Iterating and displaying the unordered_map
    for (const auto &pair : ump)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Finding an element by key
    auto it = ump.find(2);
    if (it != ump.end())
    {
        cout << "Found: " << it->first << ": " << it->second << endl;
    }

    // Erasing an element by key
    ump.erase(2);

    // Displaying the unordered_map after deletion
    for (const auto &pair : ump)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}

/*

Output:
3: Cherry
2: Banana
1: Apple
Found: 2: Banana
3: Cherry
1: Apple

*/