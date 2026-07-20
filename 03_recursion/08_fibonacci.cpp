#include<iostream>
using namespace std;


int main()
{
	int n;
	cout<<"Enter the number of times the fibonacci series to be printed: ";
	cin>>n;
	if(n==0)
	{
		cout<<"For input zero the series only contains :"<<n;
		return 0;
	}
	int arr[n+1];
	arr[0]=0;
	arr[1]=1;
	func(n, 2, arr);
	cout<<"The fibonacci series is: ";
	for(int i=0;i<=n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
