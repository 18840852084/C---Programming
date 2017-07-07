#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;
//int main() {
//	vector<int>num1 = { 1,3,7,5,6,11,56,2 };
//	sort(num1.begin(), num1.end());
//	for (int i = 0; i < num1.size(); i++)
//	{
//		cout << num1[i] << ' ';
//	}
//	cout <<endl;
//    sort(num1.rbegin(), num1.rend());
//	for (int i = 0; i < num1.size(); i++)
//	{
//		cout << num1[i] << ' ';
//	}
//	cout << endl;
//	vector<int>num2(num1);
//	for (int i = 0; i < num2.size(); i++)
//	{
//		cout << num2[i] << ' ';
//	}
//	cout << endl;
//	//set内的数据自动排序，且值唯一
//	vector<int>num3 = { 3,1,4,5,7};
//	set<vector<int>>arrset;
//	arrset.insert(num1);
//	arrset.insert(num2);
//	arrset.insert(num3);
//	cout << arrset.size();
//	cout << endl;
//
//	vector<vector<int>>v;
//	v.push_back(num1);
//	v.push_back(num2);
//	v.push_back(num3);
//	for (int i = 0; i < v.size(); i++)
//	{
//		for (int j = 0; j < v[i].size(); j++) {
//			cout << v[i][j] << ' ';
//		}
//		cout << endl;
//	}
//
//	 //作为函数的返回值可以这么用
//	/*vector<int>(num1.rbegin(), num1.rend());
//	vector<vector<int>>(num1.rbegin(), num1.rend());*/
//}