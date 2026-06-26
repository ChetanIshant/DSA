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
