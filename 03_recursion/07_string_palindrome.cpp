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

