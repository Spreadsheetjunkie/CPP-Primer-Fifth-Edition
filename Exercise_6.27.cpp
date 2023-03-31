// Exercise_6.27.cpp : Write a function that takes an initializer_list<int> and
// produces the sum of the elements in the list.

#include<initializer_list>
using std::initializer_list;

#include<iostream>
using std::cout;
using std::endl;

int lst_sum(initializer_list<int> li);

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;

	lst_sum({ a,b,c,d,e });

	return 0;
}

int lst_sum(initializer_list<int> li)
{
	int sum = 0;
	for (auto i : li)
	{
		sum += i;
	}
	cout << sum << endl;
	return sum;
}