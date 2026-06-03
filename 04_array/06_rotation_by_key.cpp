#include<iostream>
using namespace std;
int main()
{
	int n, key, i, temp;
	cout<<"Enter the size of array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of array: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<endl<<"Enter the number of times array to rotate: ";
	cin>>key;
	while(key!=0)
	{
		i=0;
		temp=arr[0];
		while(i<n-1)
		{
			arr[i]=arr[i+1];
			i+=1;
		}
		arr[i]=temp;
		key-=1;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}

}
