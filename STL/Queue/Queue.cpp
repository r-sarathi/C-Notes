/*

Queue:
    - First In First Out (FIF)

*/

#include <iostream>
#include <queue>
using namespace std;

void display(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> q;
    int isEmpty = q.empty();
    cout << "Before adding any elements: " << isEmpty << endl;

    q.push(1);
    q.push(13);
    q.push(23);
    q.push(1323);

    cout << "After adding an element to stack: " << q.empty() << endl;
    display(q);
    cout << "Displaying a top element in the stack: " << q.front() << endl;

    return 0;
}