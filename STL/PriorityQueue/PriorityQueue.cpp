#include <iostream>
#include <queue>
using namespace std;

int main()
{
    cout << "By default Max-Heap -> Priority Queue: " << endl;
    priority_queue<int> pq;
    pq.push(10);
    pq.push(30);
    pq.push(20);
    cout << "The top element is: " << pq.top() << endl;

    pq.pop();
    cout << "After popping, the top element is: " << pq.top() << endl;

    cout << "Min-Heap -> Priority Queue: " << endl;

    // Declare a priority_queue as a min-heap
    priority_queue<int, vector<int>, greater<int>>
        minHeap;

    // Insert elements into the min-heap
    minHeap.push(40);
    minHeap.push(50);
    minHeap.push(60);

    // Display the top (smallest) element
    cout << "The top element is: " << minHeap.top() << endl;

    // Pop the top element
    minHeap.pop();
    cout << "After popping, the top element is: " << minHeap.top() << endl;

    return 0;
}