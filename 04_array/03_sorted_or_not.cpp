#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n, temp;
	cout<<"Enter the number of elements: ";
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			temp=arr[i];
		}
		else
		{
			if(arr[i]<temp)
			{
				cout<<"The array is not sorted";	
				return 0;
			}
			else
			temp=arr[i];
		}
	}
	cout<<"The given array is sorted in ascending order";
}
