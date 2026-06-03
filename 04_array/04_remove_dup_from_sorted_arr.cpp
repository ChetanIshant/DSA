#include<iostream>
using namespace std;
int main()
{
	int n, temp=1;
	cout<<"Enter the size of array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]==arr[n-1])
		{
			temp=i+1;
			i+=1;
			while(i<n)
			{
				arr[i]=NULL;
				i+=1;
			}
			cout<<"Final array is: "<<endl;
			for(int i=0;i<n;i++)
			{
				cout<<arr[i]<<" ";
			}
			return 0;
		}
		if(arr[i]==arr[temp])
		{
			while(arr[temp]==arr[i])
			{
				temp+=1;
			}
			arr[i+1]=arr[temp];
		}
	}
}
