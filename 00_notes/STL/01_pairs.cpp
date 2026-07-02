/*
#Explaination:

A pair in C++ STL is a container that stores exactly two values as a single unit. 
The two values can be of the same or different data types.

In simple words: 
->std::pair is a template class in the C++ Standard Template Library (STL) that groups two related values into a single object. 
The first value is accessed using first, and the second value is accessed using second.

We use a pair when we want to keep two related pieces of information together as one object.
*/



//for integer and string both in one single pair:
#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> p;

    p.first = 101;
    p.second = "Ishant";

    cout << p.first << " " << p.second << endl;

    return 0;
}

// interview ready: 
// A pair is an STL template class that stores two related values together as a single object, 
// where the values can be of the same or different data types.
