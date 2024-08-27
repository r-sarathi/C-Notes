/*
What is a pair in C++?
    - Pair in C++ is decribed as a container that combines two elements of the same or different
data types in C++.
    - Pair in C++ consists of two elements, first and second (must be in this order),
and they accessed using the dot (.) operator and the keyword first or second.
    - The header file pair in C++ is <utility>, and it is also continer class in STL (Standard Template
    Library)

Basic Syntax:
    pair <data_type_1, data_type-2> pair_name;
    parameters:
        data_type_1: data type of first element
        data_type_2: data type of second element

Syntax for Nested Pairs:
    pair <pair<st1, dt2>, dt3> p1;
    parameters:
        dt1: data type of the first element
        dt2: data type of the second element
        dt3: data type of the third element

C++ Pair STL Functions
    Functions   | Decription                             | Syntax
    ---------------------------------------------------------------------------------------
    make_pair() | It makes it possible to create a value | pair1 = make_pair(data1, data2);
                | pair without explicitly writing the    |
                | data types.                            |
    ---------------------------------------------------------------------------------------
    swap()      | It swaps teh contents of one pair      | pair1.swap(pair2);
                | object with the contents of another    |
                | pair object. The pairs have to be of   |
                | the same kind.                         |
    ---------------------------------------------------------------------------------------
    tie()       | It unpacks the pair values into        | tie(int &, int &) = pair1;
                | independent variables by creating a    |
                | pair of value refrences to its         |
                | arguments.                             |

Note: Actually, tie() is not a pair STL function. This is for tuples but can be used with pairs
      as well. Also, it requires a tuple header file to be used.
*/

#include <iostream>
#include <utility>
#include <tuple>
using namespace std;

int main()
{
    // defining a pair 1
    pair<int, int> pr1;

    // different ways of initializing the pair
    cout << "Elements in the pair: ";
    pr1 = make_pair(1, 2);
    cout << pr1.first << " " << pr1.second << endl;

    cout << "Elements in the pair: ";
    pr1 = {3, 4};
    cout << pr1.first << " " << pr1.second << endl;

    cout << "Elements in the pair: ";
    pr1.first = 13;
    pr1.second = 23;
    cout << pr1.first << " " << pr1.second << endl;

    // defining a second pair 2
    pair<int, int> pr2(10, 20);

    cout << "Before swapping the pair: " << endl;
    cout << "Pair 1: " << pr1.first << " " << pr1.second << endl;
    cout << "Pair 2: " << pr2.first << " " << pr2.second << endl;

    // swapping the pair
    pr1.swap(pr2);

    cout << "After swapping the pair: " << endl;
    cout << "Pair 1: " << pr1.first << " " << pr1.second << endl;
    cout << "Pair 2: " << pr2.first << " " << pr2.second << endl;

    // Nested pairs
    pair<pair<int, string>, float> pr3;
    pr3 = make_pair(make_pair(13, "Thriteen"), 13.23);
    cout << "Nested pair: " << endl;
    cout << pr3.first.first << " " << pr3.first.second << " " << pr3.second << endl;

    return 0;
}
