//brute force approach

#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n, flag = 0;
	cout << "Enter the size of array: ";
	cin >> n;
	vector<int> arr(n - 1);
	for(int i = 0; i < n - 1; i++)
	{
		cin >> arr[i];
	}
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 0; j < n - 1; j++)
		{
			if(arr[j] == i)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		{
			cout << "The missing number is: " << i;
			return 0;
		}
		flag = 0;
	}
}


//semi-optimal (using sum method)
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n, arrSum = 0;
	cout << "Enter the size of array: ";
	cin >> n;
	int totalSum = n * (n + 1) / 2; 
	vector<int> arr(n - 1);
	for(int i = 0; i < n - 1; i++)
	{
		cin >> arr[i];
		arrSum = arrSum + arr[i];
	}
	cout << "Missing number is: " << totalSum - arrSum;
}


//most optimal approach (using XOR operator)
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n - 1);

    int xor1 = 0;
    int xor2 = 0;

    for(int i = 1; i <= n; i++)
    {
        xor1 ^= i;
    }
	
    for(int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        xor2 ^= arr[i];
    }

    cout << "Missing Number = " << (xor1 ^ xor2);
}
