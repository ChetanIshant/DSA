/*
Vector: dynamic array
Vector is used when we don't know how many entries are to be done in the data structure.
For already known entries, array's are used but in case of unknown entries, or entries will exceed array fails and vector comes up.

It is a dynamic array that can automatically grow or shrink in size as elements are added or removed.
Elements are stored in contigious memory as same as array
*/

vector<int> vv;
//This is a empty/dynamic container {}.

v.push_back(1);
v.emplace_back(2);
// 1 is pushed in the vector v by push_back(1)  -> {1}
// 2 is pushed in the vector v by emplace_back(2)  -> {1, 2} 
// it is said that both the function does the same work, but emplace_back() is faster than push_back();


vector<int> v(5,10);
vector<data_type> name(size, value);
//5 is the number of elements and 10 is the value of all the elements.

//When the size of a vector is predefined and after that we will try to push_back(1), then the size will be increased and the value
//will be inserted in the vector, as shown below:
vector<int> v(5,10);
// O/P -> [10, 10, 10, 10, 10]
v.push_back(99);
// O/P -> [10, 10, 10, 10, 10, 99]

//We can also copy a existing vector to another new vector.
vector<int> v1(5, 10);
vector<int> v2(v1);
//both the vectors have same data and v2 is the copy of v1.

