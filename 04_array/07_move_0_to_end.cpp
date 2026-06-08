//code 1: this code is brute force approach and complexity is O(n^2) and maintains the order of elements of array

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





//code 2: this code doen't maintain the order of elements but have O(n) complexity which is good approach

#include<iostream>
using namespace std;
int main()
{
	int n, i=0, j, temp;
	cout<<"Enter the size of array: ";
	cin>>n;
	j=n-1;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	while(i<j)
    {
        if(arr[j]==0)
        {
            j--;
        }
        else if(arr[i]!=0)
        {
            i++;
        }
        else
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

            i++;
            j--;
        }
    }
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}


//code 3: the super code, this code maintains the order as well and have a complexity of O(n)

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    int j=0;  
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
