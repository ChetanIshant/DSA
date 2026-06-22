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
	
	while(1)
	{
		if(i >= n)
		{
			while(j < m)
			{
				if(newArr[temp - 1] == arr2[j])
				j += 1;
				else
				{
					newArr[temp] = arr2[j];
					j += 1;
					temp += 1; 
				}
			}
			break;
		}
		else if(j >= m)
		{
			while(i < n)
			{
				if(newArr[temp - 1] == arr1[i])
				i += 1;
				else
				{
					newArr[temp] = arr1[i];
					i += 1;
					temp += 1;
				}
			}
			break;
		}

		if(temp > 0)
		{
			if(newArr[temp - 1] == arr1[i])
			{
				i += 1;
				continue;
			}
			else if(newArr[temp - 1] == arr2[j])
			{
				j += 1;
				continue; 
			}	
		}

		if(arr1[i] == arr2[j])
		{
			newArr[temp] = arr1[i];
			temp += 1;
			i += 1;
			j += 1;
		}
		else if(arr1[i] < arr2[j])
		{
			newArr[temp] = arr1[i];
			i += 1;
			temp += 1;
		}
		
		else if(arr2[j] < arr1[i])
		{
			newArr[temp] = arr2[j];
			temp += 1;
			j += 1;
		}
		
		if(i >= n && j >= m)
		break;
	}

	cout << "The final array is: ";
	for(int x = 0; x < temp; x++)
	{
		cout << newArr[x] << " ";
	}
}

// Union of two sorted arrays using the two-pointer technique.
// Time Complexity: O(n + m)
// Space Complexity: O(n + m)
