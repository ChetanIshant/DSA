#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    if(n<2)
    {
        cout<<"Second largest element does not exist";
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int largest, secondLargest;
    if(arr[0]>arr[1])
    {
        largest=arr[0];
        secondLargest=arr[1];
    }
    else
    {
        largest=arr[1];
        secondLargest=arr[0];
    }
    for(int i=2;i<n;i++)
    {
        if(arr[i]>largest)
        {
            secondLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondLargest && arr[i]!=largest)
        {
            secondLargest=arr[i];
        }
    }

}
