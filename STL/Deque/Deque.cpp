#include <iostream>
#include <deque>
#include <vector>
using namespace std;

void display(deque<int> &dq)
{
    for (auto i : dq)
    {
        cout << i << " ";
    }
}

int main()
{
    deque<int> dq;
    dq.push_back(13);
    dq.push_back(23);
    dq.push_front(1);
    dq.push_front(0);

    cout << "Elements in the deque: " << endl;
    display(dq);

    dq.pop_back();
    cout << "\nAfter poping the back element in the deque: " << endl;
    display(dq);

    dq.pop_front();
    cout << "\nAfter poping the front element in the deque: " << endl;
    display(dq);

    return 0;
}

/*

Output:
Elements in the deque:
0 1 13 23
After poping the back element in the deque:
0 1 13
After poping the front element in the deque:
1 13

*/