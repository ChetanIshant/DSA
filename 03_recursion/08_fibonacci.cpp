#include<iostream>
using namespace std;

void func(int n, int temp, int arr[])
{
	if(temp>n)
	return;
	
	arr[temp]=arr[temp-1]+arr[temp-2];
	func(n, temp+1, arr);
}

