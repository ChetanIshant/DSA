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

vector<pair<int, int>> vec;
// pair can also be defined as the data type of declaring the vector.
vec.push_back({1, 2});
vec.emplace_back(1, 2);
//both the functions will do the same job but there is a small syntax difference.
// and emplace_back will perform the operation of insertion more fastly as compared to push_back.


