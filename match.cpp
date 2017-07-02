#include<iostream>
#include<string>
using namespace std;
int strStr(string haystack, string needle)
{
	int m = haystack.length();
	int n = needle.length();
	int i = 0;
	int j = 0;
	if (m < n)
	{
		return -1;
	}
	else 
	{
		while (i < m&&j < n)
		{
			if (haystack[i] == needle[j])
			{
				i++, j++;
			}
			else
			{
				i = i - j + 1;
				j = 0;
			}
		}
		while (j == n)
		{
			return i-j;
		}
		while (i == m)
		{
			return -1; 
		}
	}
}
/*int main() {
	string a = "3a1ababdc";
	string b = "abc";
	int res = strStr(a, b);
	cout << res;
	return 0;
}*/