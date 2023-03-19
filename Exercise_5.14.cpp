// Exercise_5.14.cpp : Write a program to read strings from standard input looking for duplicated words.
// The program should find places in the input where one word is followed immediately by itself.
// Keep track of the largest number of times a single repetition occurs and which word is repeated.
// Print the maximum number of duplicates, or else print a message saying that no word was repeated.
// For example, if the input is
//		how now now now brown cow cow
// the output should indicate that the word now occurs three times.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main()
{
	// read words from the standard input and store them as elements in a vector
	string word;
	vector<string> text;		// empty vector
	while (cin >> word)
	{
		text.push_back(word);	// append word to text
	}

	// count the number of consecutive duplicates in text
	vector<unsigned> index;		// empty vector
	unsigned dupes = 0;			// zero initialization
	for (auto iter = text.cbegin(); iter != text.cend() && !iter->empty(); ++iter)
	{
		if (iter != text.cbegin() && *iter == *(iter-1))
		{
			++dupes;
		}
		else
		{
			dupes = 0;
		}
		index.push_back(dupes);
	}

	// keep track of the largest number of times a single repetition occurs and which word is repeated
	unsigned maxdupes = 0;		// zero initialization
	for (auto iter = index.cbegin(); iter != index.cend(); ++iter)
	{
		if (*iter > maxdupes)
		{
			maxdupes = *iter;
		}
	}

	// output
	unsigned indexcnt = 0;		// zero initialization
	if (maxdupes == 0)
	{
		cout << "No word was repeated.";
	}
	else
	{
		for (auto iter = index.cbegin(); iter != index.cend(); ++iter)
		{
			if (*iter == maxdupes)
			{
				cout << text[indexcnt] << " is repeated " << maxdupes + 1 << " times." << endl;
			}
			++indexcnt;
		}
	}
	
	return 0;
}