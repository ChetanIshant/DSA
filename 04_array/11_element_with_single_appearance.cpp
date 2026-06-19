#include<iostream>
#include<vector>
using namespace std;


int main()
{
	int n, result=0;
	
	cout << "Enter the size of array: ";
	cin >> n;
	
	vector<int> arr(n);
	
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for(int i = 0;i < n; i++)
	{
		result = result ^ arr[i];
	}
	cout << "The element with single occurancy is : " << result;
}



//this is not the final code
//new code will be updated soon
