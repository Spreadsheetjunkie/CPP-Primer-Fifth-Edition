//	Exercise_6.10.cpp : Using pointers, write a function to swap the values of two ints.
//	Test the function by calling it and printing the swapped values.

#include<iostream>
using std::cout;
using std::endl;

void intswap(int* p, int* q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
}

int main()
{
	int n = 0;
	int i = 42;

	cout << "Before swapping: n = " << n << " i = " << i << endl;
	intswap(&n, &i);
	cout << "After swapping: n = " << n << " i = " << i << endl;

	system("pause");
	return 0;
}

/*
void intswap(int n, int i)
{
	cout << "Before swapping: val1 = " << n << " and val2 = " << i << endl;
	
	int temp1 = i;
	int temp2 = n;

	int* p = &n;	// p points to n
	*p = temp1;		// value in n is changed
	
	int* q = &i;	// q points to i
	*q = temp2;		// value in i is changed
	
	cout << "After swapping: val1 = " << n << " and val2 = " << i << endl;
}

int main()
{
	int n = 5;
	int i = 9;

	intswap(n, i);

	system("pause");
	return 0;
}
*/