#include<iostream>
using namespace std;
int main()
{
	int n, temp, count=0, sum=0, power=1;
	cout<<"Enter the number: ";
	cin>>n;
	if(n==0)
	{
		cout<<"The given number is armstrong number";
		return 0;
	}
	temp=n;
	while(temp>0)
	{
		count++;
		temp=temp/10;
	}
	temp=n;
	while(temp>0)
	{
		for(int i=0;i<count;i++)
		{
			power = power * (temp%10);
		}
		sum = sum + power;
		power=1;
		temp=temp/10;
	}
	cout<<"This is sum: "<<sum<<endl;
	if(sum == n)
	cout<<"The given number is armstrong number";
	else
	cout<<"The given number is not armstrong number";
}
