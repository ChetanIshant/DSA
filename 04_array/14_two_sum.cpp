//We have multiple approaches for solving a two sum problem:
//Very first which I have tried is two pointer approach, for sorted array it will work in O(n) but in-case of unsorted array, 
//it will goes to O(n^2) which is not optimal
//if we have to solve by using two pointer approach and in optimal complexoty, then the array must be sorted or we have to sort it first.


//Two-pointer approach for sorted array, Complexity -> O(n)
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n, target, left = 0, right;
	cout << "Enter the size of array: ";
	cin >> n;
	right = n - 1;
	cout << "Enter the target value: ";
	cin >> target;
	vector<int> arr(n);
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	while(left < right)
	{
		if(arr[left] + arr[right] == target)
		{
			cout << "YES" << endl << "The indexes are: [" << left << ", " << right << "]";
			return 0;
		}
		else if(arr[left] + arr[right] < target)
		left += 1;
		else
		right -= 1;		
	}
	cout << "NO";
}






//sorted and unsorted array and then find the two sum using two pointer approach: 
//Complexity -> O(n log n)
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    int n, target;
    cout << "Enter size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter target: ";
    cin >> target;

    // Sorting 
    sort(arr.begin(), arr.end());

    // Two Pointers
    int left = 0;
    int right = n - 1;
    while(left < right)
    {
        int sum = arr[left] + arr[right];
        if(sum == target)
        {
            cout << "YES\n";
            cout << "Pair Found: "
                 << arr[left] << " + "
                 << arr[right] << " = "
                 << target;
            return 0;
        }
        else if(sum < target)
        left++;
        else
		right--;
    }
    cout << "NO";
    return 0;
}
