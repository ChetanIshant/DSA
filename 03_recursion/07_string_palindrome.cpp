#include<iostream>
using namespace std;

bool func(string s, int temp)
{
	if(temp== s.length()/2)
	return true;

	else if(s[temp]!=s[s.length()-temp-1])
	return false;

	else
	return func(s, temp+1);
}

int main()
{
	string s;
	bool res;
	cout<<"Enter the string: ";
	cin>>s;
	res=func(s, 0);
	if(res)
	{
		cout<<"String is palindrome";
	}
	else
	{
		cout<<"String is not palindrome";
	}
}
