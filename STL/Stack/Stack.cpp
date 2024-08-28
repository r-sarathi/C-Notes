/*
Stack:
    - Last In First Out (LIFO)
*/

#include <iostream>
#include <stack>
using namespace std;

void display(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> st;
    int isEmpty = st.empty();
    cout << "Before adding any elements: " << isEmpty << endl;

    st.push(1);
    st.push(13);
    st.push(23);
    st.push(1323);

    cout << "After adding an element to stack: " << st.empty() << endl;
    display(st);
    cout << "Displaying a top element in the stack: " << st.top() << endl;
    return 0;
}
