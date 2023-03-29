// Exercise_6.12.cpp : Rewrite the program from exercise 6.10 in 6.2.1 (p. 210) to use
// references instead of pointers to swap the value of two ints.
// Which version do you would be easier to use and why?

#include<iostream>
using std::cout;
using std::endl;

void intswap(int& i, int& j);

int main()
{
	int a = 42;
	int b = 5;

	cout << "Before swapping: a = " << a << " b = " << b << endl;

	intswap(a, b);

	cout << "After swapping: a = " << a << " b = " << b << endl;

	return 0;
}

void intswap(int& i, int& j)
{
	int temp = 0;
	temp = i;
	i = j;
	j = temp;
}