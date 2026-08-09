#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n, ptr1 = 0, ptr2 = 0, temp, res = 0;

    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while(ptr1 < n)
    {
        if(arr[ptr1] == 1)
        {
            ptr2 = ptr1 + 1;

            while(ptr2 < n && arr[ptr2] == 1)
            {
                ptr2++;
            }

            temp = ptr2 - ptr1;

            if(temp > res)
            {
                res = temp;
            }

            ptr1 = ptr2;
        }
        else
        {
            ptr1++;
        }
    }



