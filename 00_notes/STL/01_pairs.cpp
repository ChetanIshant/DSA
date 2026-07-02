/*
#Explaination:

A pair in C++ STL is a container that stores exactly two values as a single unit. 
The two values can be of the same or different data types.

In simple words: 
->std::pair is a template class in the C++ Standard Template Library (STL) that groups two related values into a single object. 
The first value is accessed using first, and the second value is accessed using second.

We use a pair when we want to keep two related pieces of information together as one object.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	// for single pair
	pair<int, float> p = {12, 10.1};
	cout << "O/P single pair in one var: " << p.second << endl;
	
	// for multiple pair
	pair<int, pair<int, int>> x = {1, {2, 3}};
	cout << "O/P for multiple pair in one var: " << x.second.first << endl;
	
	// for array
	pair<int, int> arr[] = {{2, 3}, {12, 13}, {22, 23}};
	cout << "O/P for array of pairs: " << arr[1].second;
}

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
