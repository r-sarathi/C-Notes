#include <iostream>
using namespace std;

int fibonacciSeries(int num)
{
    if (num == 0 || num == 1)
    {
        return num;
    }
    return fibonacciSeries(num - 1) + fibonacciSeries(num - 2);
}

int main()
{
    int num = 10;
    cout << "The fibonacci series are: " << fibonacciSeries(num) << " ";
}