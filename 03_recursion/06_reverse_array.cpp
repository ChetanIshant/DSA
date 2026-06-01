#include<iostream>
using namespace std;

void func(int n, int arr[], int temp)
{
	int tempVar;
	if(temp==(n/2))
	return;
	tempVar=arr[temp];
	arr[temp]=arr[n-1-temp];
	arr[n-1-temp]=tempVar;
	func(n, arr, temp+1);
}

int main()
{
	int n;
	cout<<"Enter the number of elements: ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	func(n, arr, 0);
	cout<<"Reversed array is here: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
