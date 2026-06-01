#include<iostream>
using namespace std;

void func(int n, int temp)
{
	
	if(temp>n)
	return;
	cout<<temp<<" ";
	func(n, temp+1);
}

int main()
{
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	func(n, 1);
}
