//two pointers approach used 
//this logic will work for all the inputs.

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n, sum, i = 0, j;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the sum: ";
    cin >> sum;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if(n == 1)
    {
        cout << "The entered sum is not available in the array";
        return 0;
    }

    j = i + 1;

    while(i < n - 1)
    {
        if(sum == (arr[i] + arr[j]))
        {
            cout << "The sum is: "
                 << arr[i] << " + "
                 << arr[j] << " = "
                 << arr[i] + arr[j];
            return 0;
        }

        j += 1;

        if(j == n)
        {
            i += 1;
            j = i + 1;
        }
    }

    cout << "The entered sum is not available in the array";
}
