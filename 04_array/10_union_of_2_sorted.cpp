#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n, m, i = 0, j = 0, temp=0;
	
	cout << "Enter the size of 1st array: ";
	cin >> n;
	cout << "Enter the size of 2nd array: ";
	cin >> m;
	
	vector<int> arr1(n);
	vector<int> arr2(m);
	vector<int> newArr(n + m);
	cout << "Enter the elements of 1st array: " << endl;
	for(int k = 0; k < n; k++)
	{
		cin >> arr1[k];
	}
	
	cout << "Enter the elements of 2nd array: " << endl;
	for(int l = 0; l < m; l++)
	{
		cin >> arr2[l];
	}
	
	
	newArr[0]=0;
	while(1)
	{
		if(arr1[i] == newArr[temp])
		i += 1;
		else if(arr2[j] == newArr[temp])
		j += 1;
//	else
//	{	
		if((arr1[i] == arr2[j]))
		{
			newArr[temp] = arr1[i];
			i += 1;
			j += 1;
			temp += 1;			
		}
		else if(arr2[j] < arr1[i])
		{
			newArr[temp] = arr2[j];
			j += 1;
			temp += 1;
		}
		else if(arr1[i] < arr2[j])
		{
			newArr[temp] = arr1[i];
			i += 1;
			temp += 1;
		}
//	}
		
		if(i == n)
		{
			newArr[temp] = arr1[i];
			temp += 1;
			while(j < m)
			{
				newArr[temp] = arr2[j];
				j += 1;
				temp += 1;
			}
			break;
		}
		else if(j == m)
		{
			newArr[temp] = arr2[j];
			temp += 1;
			while(i < n) 
			{
				newArr[temp] = arr1[i];
				i += 1;
				temp += 1;
			}
			break;
		}
		
		//cout << temp;
		
//		if(i == n-1 && j == m-1)
//		break;
	}
	
	//cout << temp << endl;
	cout<<"The new array is :"<<endl;
	for(int x = 0; x < temp-1; x++)
	{
		cout << newArr[x] << " ";
	}
}
//this is not the final code
//new code will be updated soon
