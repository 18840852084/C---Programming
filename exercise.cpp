//1. 从命令行输入若干个正整数(大于等于2个)，得到一个集合N。
//2. 从N中任意取出两个数并求和，得到的值构成集合A。
//3. 从N中任意取出两个数，并求差的绝对值，得到的值构成集合B。
//4. 从集合A和集合B当中，任意取出两个数，其差的绝对值，又构成集合D
//D的最小元素是d1, D的最大元素是d2, D的元素个数是s
//请输出d1 + d2 + s
#include <iostream>
#include <vector>
#include <numeric>
#include <limits>
#include<set>
#include<math.h>
#include<algorithm>
#include <iterator> 
using namespace std;
// 请完成下面这个函数，实现题目要求的功能
// 当然，你也可以不按照这个模板来作答，完全按照自己的想法来 ^-^
int result(const vector <int>& inputs) {
	set<int>A;
	set<int>B;
	set<int>C;
	set<int>D;
	int len = inputs.size();
	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			A.insert(inputs[i] + inputs[j]);
		}
	}
	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			B.insert(abs(inputs[i] -inputs[j]));
		}
	}
	//set_union(A.begin(), A.end(), B.begin(), B.end(), inserter(C,C.begin()));
	set<int>::iterator p;
	set<int>::iterator q;
	for (p = A.begin(); p != A.end(); p++) {
		for (q = B.begin(); q != B.end(); q++) {
			D.insert(abs(*p - *q));
		}
	}
	int s = D.size();
	int d1 = *(D.begin());
	int d2 = *(D.end());

	return (d1+d2+s);
}

int main() {
	int size = 0;
	cin >> size;
	cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
	vector<int> points;
	for (size_t i = 0; i<size; ++i) {
		int item;
		cin >> item;
		cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
		points.push_back(item);
	}
	int res = result(points);
	cout << res << endl;
	return 0;
}