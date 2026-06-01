#include<iostream>
using namespace std;
int main()
{
	int n, largest=0;
	cout<<"Enter the size of array: ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(i==0)
		{
			largest=arr[i];
		}
		if(arr[i]>largest)
		largest=arr[i];
	}
	cout<<"Largest element is : "<<largest;
}
