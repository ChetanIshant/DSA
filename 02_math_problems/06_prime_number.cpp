#include<iostream>
using namespace std;
int main()
{
	int n, divisor=2;
	cout<<"Enter the number: ";
	cin>>n;
	if(n<=1)
	{
		cout<<"The entered number is not prime ";
		return 0;
	}
	while(divisor<n)
	{
		if(n%divisor == 0)
		{
			cout<<"The entered number is non-prime ";
			return 0;
		}
		divisor+=1;
	}
	cout<<"The entered number is prime number ";
}
