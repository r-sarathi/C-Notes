/*

What is Vectors in C++?
    - Vectors in C++ are one of the offered to us by the STl (Standard Template Library) in C++.
    - It stores a collection of similar-type objects in a variable-sized (dynamic) array.

Note: C++ provides us with objects that store a collection of elements (i.e. other objects),
      referred to by the term 'containers'.

Declaration of a vector in C++:
    - In C++, a vector is a dynamic array. meaning that its size can grow or shrink as needed
    during program execution.

Syntax:
    std::vector<data_type> vector_name;
    where:
        std::vector is the namespace for vectors
        <data_type> is the type of data teh vector will store, such as int, double, or std::string
        vector_name is the name of the vector

For example:
    std::vector<int> numbers;
    - This vector initially hold no elements, but its size can be increased or decreased as needed.

Initialization of a vector in C++:
    - Initializing a vector in C++, involves values to its elements. There are several ways to initialize
    a vector, including

    1. Using an initializer list:
        - An initializer list is a comma-separated list of values enclosed in curly braces. It is the
        simplest and most common way to initialize a vector.
                        std::vector<int> numbers = {1, 2, 3, 4, 5, 6};
        - This code initializes a vector named numbers with the values 1, 2, 3, 4, and 5.

    2. Using the fill() algorithm:
        - The fill() algorithm fills all the elements of a vector with a specified value.
                        std::vector<int> numbers(10, 0);
        - This code initializes a vector of 10 integer elements, all with the value 0.

    3. Using a copy constructor:
        - A copy constructor creates a new vector by copying the values from an existing vector.
                        std::vector<int> numbers1 = {1, 2, 3};
                        std::vector<int> numbers2(numbers1);
        - This code initializes a vector named number2 by copying the values of teh vector numbers1.

    4. Using an array:
        - An array can be used to initialize a vector.
                        int arr[] = {1, 2, 3};
                        std::vector<int> numbers(arr, arr + sizeof(arr) / sizeof(int));
        - This code initializes a vector named numbers using the elements of the array arr.

    5. Using a range-based for loop:
        - A range-based for loop can be used to initialize a vector with values from another container.
                        std::list<int> values = {1, 2, 3};
                        std::vector<int> numbers;
                        for (int value : values) {
                            numbers.push_back(value);
                        }
        - This code initializes a vector named numbers by copying the values from the list values.

Basic Vector Operations:
    1. Accessing Elements: YYou can access elements of a vector using either its index or an
    iterator. Indexing uses square brackets [] and an index value, while iterators provide a
    pointer-like interface to traverse the vector.

        std::vector<int> numbers = {1, 2, 3, 4, 5};
        int firstElement = numbers[0]; // Accessing the first element
        int lastElement = numbers.back(); // Accessing the last element

    2. Modifying Elements: You can modify the values of vector elements using either indexing
    or iterators. Both methods allow you to change the value at a specific position in the vector.

        numbers[2] = 10; // Modifying the third element
        numbers.front() = 20; // Modifying the first element

    3. Adding Elements: There are several ways to add new elements to a vector. The most common
    methods are using the push_back() and insert() functions.

        numbers.push_back(6); // Adding an element to the end
        numbers.insert(numbers.begin() + 1, 7); // Inserting an element at position 1

    4. Removing Elements: You can remove elements from a vector using the erase() and pop_back()
    functions.

        numbers.erase(numbers.begin() + 2); // Removing the third element
        numbers.pop_back(); // Removing the last element

    5. Checking Size and Emptiness: The size() function returns the number of elements in the vector,
    while the empty() function checks whether the vector is empty or not.

        int vectorSize = numbers.size(); // Checking the size of the vector
        bool isEmpty = numbers.empty(); // Checking if the vector is empty

    6. Resizing the Vector: You can resize a vector using the resize() function, which can either
    increase or decrease the vector's capacity.

        numbers.resize(10); // Resizing the vector to hold 10 elements

    7. Clearing the Vector: The clear() function removes all elements from the vector, effectively
    emptying it.
        numbers.clear(); // Clearing the vector

Various Functions in Vectors:
    Iterators:
        Function        |           Description             |       Example Code
        -----------------------------------------------------------------------------
        begin()         | Iterator to beginnig              | auto it = a.begin();
        -----------------------------------------------------------------------------
        end()           | Iterator to end                   | auto it = a.end()
        -----------------------------------------------------------------------------
        rbegin()        | Reverse iterator to reverse       | auto rit = a.rbegin()
                          beginning
        -----------------------------------------------------------------------------
        rend()          | Reverse iterator to reverse end   | auto rit = a.end()
        -----------------------------------------------------------------------------
        cbegin()        | const_iterator to beginning       | auto cit = a.cbegin()
        -----------------------------------------------------------------------------
        cend()          | const_iterator                    | auto cit = a.cend()
        -----------------------------------------------------------------------------
        crbegin()       | const_reverse_iterator to reverse | auto crit = a.crbegin()
                          beginning
        -----------------------------------------------------------------------------
        crend()         | const_reverse_iterator to reverse | auto crit = a.crend()
                          end


*/

#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &arr)
{
    for (auto it : arr)
    {
        cout << it << " ";
    }
}

int main()
{
    // different ways of initialization
    vector<int> vect1(5);
    cout << "Vector with size of 5: " << endl;
    display(vect1);

    vector<int> vect2{1, 2, 3, 4, 5, 6, 7};
    cout << "\nVector 2: " << endl;
    display(vect2);
    return 0;
}