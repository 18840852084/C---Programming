//1. ���������������ɸ�������(���ڵ���2��)���õ�һ������N��
//2. ��N������ȡ������������ͣ��õ���ֵ���ɼ���A��
//3. ��N������ȡ���������������ľ���ֵ���õ���ֵ���ɼ���B��
//4. �Ӽ���A�ͼ���B���У�����ȡ�������������ľ���ֵ���ֹ��ɼ���D
//D����СԪ����d1, D�����Ԫ����d2, D��Ԫ�ظ�����s
//�����d1 + d2 + s
#include <iostream>
#include <vector>
#include <numeric>
#include <limits>
#include<set>
#include<math.h>
#include<algorithm>
#include <iterator> 
using namespace std;
// ������������������ʵ����ĿҪ��Ĺ���
// ��Ȼ����Ҳ���Բ��������ģ����������ȫ�����Լ����뷨�� ^-^
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