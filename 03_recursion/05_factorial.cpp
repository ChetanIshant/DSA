#include<iostream>
using namespace std;

/*
Approach with three variables, will use more memory 
basic approach and easy to understand

int func(int n, int factorial, int temp)
{
	if(temp==n)
	return factorial;
	factorial = factorial*(n-temp);
	return func(n, factorial, temp+1);
}
*/

//optimized, will use less memory
int factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main()
{
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	cout<<"Sum of numbers is: "<<factorial(n);
}
