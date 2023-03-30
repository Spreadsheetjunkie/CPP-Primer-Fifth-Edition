// Exercise_6.17.cpp : Write a function to determine whether a string contains any capital letters.
// Write a function to change a string to all lowercase.
// Do the parameters you used in these functions have the same type? If so, why? If not, why not?

#include<iostream>
using std::cout;
using std::endl;

#include<string>
using std::string;

bool has_upper(const string& s);
string chgto_lower(string& s);

int main()
{
	string s1 = { "hellO HoW's It GoINg?" };
	string s2 = { "hello how's it going?" };

	cout << has_upper(s1) << endl;
	cout << has_upper(s2) << endl;

	chgto_lower(s1);
	chgto_lower(s2);

	cout << s1 << endl;
	cout << s2 << endl;

	return 0;
}

bool has_upper(const string& s)
{
	unsigned upper_cnt = 0;
	for (auto c : s)
	{
		if (isupper(c))
		{
			++upper_cnt;
		}
	}
	if (upper_cnt == 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

string chgto_lower(string& s)
{
	for (auto& c : s)
	{
		c = tolower(c);
	}
	return s;
}