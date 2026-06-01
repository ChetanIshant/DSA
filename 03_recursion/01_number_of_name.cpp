#include<iostream>
#include<string>
using namespace std;

void func(int n, int count, string s)
{
	if(count==n)
	return;
	cout<<s<<" ";
	func(n, count+1, s);
}
int main()
{
	int n;
	string s;
	cout<<"Enter the number of times the name should be printed: ";
	cin>>n;
	cout<<"Enter the name to be printed: ";
	cin>>s;
	func(n, 0, s);
}
