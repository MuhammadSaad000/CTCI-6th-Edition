#include<iostream>
using namespace std;

// CtCI-6th Edition : ch-01 Arrays and Strings
// Problem link on LeetCode : https://leetcode.com/problems/valid-anagram

bool isAnagram(string s, string t);


bool isAnagram(string s, string t)
{
	if (s.length() != t.length())
		return false;

	int letters[128] = { 0 };

	for (int i = 0; i < s.length(); i++) {
		int charVal = int(s[i]);
		letters[charVal]++;
	}

	for (int i = 0; i < t.length(); i++) {
		int charVal = int(t[i]);
		letters[charVal]--;
		if (letters[charVal] < 0)
			return false;
	}
	return true;
}




int main()
{
	bool ans = isAnagram("Helo", "lleHo");
	cout << ans << endl;

	return 0;
}