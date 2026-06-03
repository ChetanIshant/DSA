#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n, i, temp;
	cout<<"Enter the size of array: ";
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	i=0;
	temp=arr[0];
	while(i<n-1)
	{
		arr[i]=arr[i+1];
		i+=1;
	}
	arr[i]=temp;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
