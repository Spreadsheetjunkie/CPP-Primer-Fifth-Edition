// Exercise_6.18.cpp : Write declarations for each of the following functions.
// When you write these declarations, use the name of the function to indicate what the function does.
// (a) A function named compare that returns a bool and has two parameters that are references to a class named vector.
// (b) A function named changed change_val that returns a vector<int> iterator and takes two parameters:
// one is an int and the other is an iterator for a vector<int>.

#include<vector>;
using std::vector;

bool compare(vector& vec1, vector& vec2);

vector<int>::iterator change_val(int ivec1, vector<int>::iterator iter1);