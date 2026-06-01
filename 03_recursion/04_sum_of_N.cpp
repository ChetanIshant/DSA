#include<iostream>
using namespace std;

int func(int n, int sum, int temp)
{
	if(temp>n)
	return sum;
	sum = sum + temp;
	return func(n, sum, temp+1);
}

int main()
{
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	cout<<"Sum of numbers is: "<<func(n, 0, 0);
}
