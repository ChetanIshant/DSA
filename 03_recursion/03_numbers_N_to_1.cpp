#include<iostream>
using namespace std;

void func(int temp)
{
	if(temp==0)
	return;
	cout<<temp<<" ";
	func(temp-1);
}

int main()
{
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	func(n);
}
