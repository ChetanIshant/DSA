#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n, x, res = 0;
	cout << "Enter the size of array: ";
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cin >> x;
		res = res ^ x;	
	}	
	
	cout << "The single appearance number is: " << res;
}
