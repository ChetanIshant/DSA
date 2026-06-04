#include<iostream>
using namespace std;
int main()
{
	int n, j, temp, i;
	cout<<"Enter the size of array: ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	i=0;
	j=0;
	while(i<n)
	{
		if(arr[i]==0)
		{
			j=i;
			while(arr[j]==0)
			{
				j+=1;
				if(j==n)
				{
					for(int i=0;i<n;i++)
					{
						cout<<arr[i]<<" ";
					}
					return 0;
				}
			}
			arr[i]=arr[j];
			arr[j]=0;
		}
		i+=1;
	}
	cout<<"The array does not contain any zero";
}
