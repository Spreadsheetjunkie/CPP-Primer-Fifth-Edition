// Exercise_6.15.cpp : Explain the rationale for the type of each of find_char's parameters.
// In particular, why is s a reference to const but occurs is a plain reference?
// Why are these parameters references, but the char parameter c is not?
// What would happen if we made s a plain reference?
// What if we made occurs a reference to a const?

#include<iostream>
using std::cout;
using std::endl;

#include<string>
using std::string;

string::size_type find_char(const string& s, char c, string::size_type& occurs);

int main()
{
	string s = { "anoddnarrativewhichemergedfollowing" };
	string::size_type ctr;

	auto index = find_char(s, 'o', ctr);

	cout << "Character " << index + 1 << " is the first occurence of o in the string." << endl;
	cout << "o occurs " << ctr << " times in the string." << endl;
	
	return 0;
}

// returns the index of the first occurrence of c in s
// the reference parameter occurs counts how ofter c occurs
string::size_type find_char(const string& s, char c, string::size_type& occurs)
{
	auto ret = s.size();	// position of the first occurrence, if any
	occurs = 0;
	for (decltype(ret) i = 0; i != s.size(); ++i)
	{
		if (s[i] == c)
		{
			if (ret == s.size())
			{
				ret = i;	// remember the first occurrence of c
			}
			++occurs;		// increment the occurrence count
		}
	}
	return ret;				// count is returned implicitly in occurs
}