#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n, key, i=0;
	cout << "Enter the size of array: ";
	cin >> n;
	
	vector<int> arr(n);
	
	cout << "Enter the value to be searched: ";
	cin >> key;
	
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	while(i < n)
	{
		if(arr[i] == key)
		{
			cout << "The element: " << arr[i] << " found at index value : " << i;
			return 0;
		}
	
		i+=1;
	}
	cout << "The key value is not present in the array ";
}
