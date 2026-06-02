#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	vector<int> arr(n);
	cout<<"Enter the elements: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]==arr[n-1])
		{
			while(i<n)
			{
				arr[i]=NULL;
				i+=1;
			}
			return 0;
		}
		
		if(arr[i]==arr[i+1])
		{
			n=i;
			while(arr[n+1]!=arr[i])
			{
				
			}
		}
		
	}
}
