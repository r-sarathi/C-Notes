#include <iostream>
#include <list>
using namespace std;

void display(list<int> &l1)
{
    for (auto it : l1)
    {
        cout << it << " ";
    }
}

int main()
{
    list<int> l1;
    l1.push_back(13);
    l1.push_back(23);
    l1.push_front(1);
    l1.push_front(0);

    cout << "Elements in the list: " << endl;
    display(l1);

    l1.pop_back();
    cout << "\nAfter poping the back element in the list: " << endl;
    display(l1);

    l1.pop_front();
    cout << "\nAfter poping the front element in the list: " << endl;
    display(l1);

    return 0;
}

/*
Output:
Elements in the list:
0 1 13 23
After poping the back element in the list:
0 1 13
After poping the front element in the list:
1 13
*/