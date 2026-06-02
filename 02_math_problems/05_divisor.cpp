#include<iostream>
using namespace std;
int main()
{
	int n, divisor=1;
	cout<<"Enter the number: ";
	cin>>n;
	if(n==0)
	{
		cout<<"0 has infinitely many divisors";
		return 0;
	}
	while(divisor<n)
	{
		if(n%divisor == 0)
		{
			cout<<divisor<<" ";
		}
		divisor+=1;
	}
	cout<<n<<" ";
}
