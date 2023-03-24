#include<iostream>
using namespace std;


bool isUnique(string str)
{
	// if string has more than 128 characters it must contain repeated characters
	if (str.length() > 128)
		return false;

	// make array of size 128 characters initially all are false;
	bool* check = new bool[128];
	check = {false};

	for (int i = 0; i < str.length(); i++)
	{
		int ascii = int(str[i]);
		if (check[ascii])
			return false;
		check[ascii] = true;
	}
	return true;
}



int main()
{
	cout << isUnique("hello") << endl;
	return 0;
}