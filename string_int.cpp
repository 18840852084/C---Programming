#include<iostream>
#include<string>
#include<vector>
using namespace std;
string intToRoman(int num) {
	vector<vector<string>>roman = {
		{ "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" },
		{ "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" },
		{ "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" },
		{ "", "M", "MM", "MMM" }
	};

	string result = "";
	int i = 0;
	while (num) {
		int j = num % 10;
		result = roman[i][j] + result;
		num = num / 10;
		i++;
	}
	return result;
}
//��ǰ�������������֣����ĳ������ǰһ����С������ϸ�������֮����ȥǰһ����������Ȼ����ϸ���
int charToint(char c) {
	switch (c) {
	case 'I': return 1;
	case 'V': return 5;
	case 'X': return 10;
	case 'L': return 50;
	case 'C': return 100;
	case 'D': return 500;
	case 'M': return 1000;
	}
	//return 0;
}
int romanToInt(string s) {
	//vector<string>roman = { "M","D","C","L","X","V","I" };
	int len = s.length();
	int result = charToint(s[0]);
	for (int i = 1; i < len; i++) {
		if (charToint(s[i]) <= charToint(s[i - 1])) {
			result = result + charToint(s[i]);
		}
		else {
			result = result - 2 * charToint(s[i - 1]) + charToint(s[i]);
		}
	}	
	return result;
}

int main() {
	string a = "MDXXIII";
	int b = romanToInt(a);
	cout << b<< endl;
}