#include <iostream>

using namespace std;

int main()
{
	int c[4] = { 1,2,3,4 };
	int *a[4]; //指针数组
	int(*b)[4]; //数组指针
	b = &c;
	//将数组c中元素赋给数组a
	for (int i = 0; i<4; i++)
	{
		a[i] = &c[i];
	}
	//输出看下结果
	cout << *a[1] << endl; //输出2就对
	cout << (*b)[2] << endl; //输出3就对
	return 0;
}
/*
int **a = new int*[n];
for (int i = 0; i < n; i++)
{
a[i] = new int[m];
}
for (int j = 0; j < m; j++) {
cin>>a[i][j]>>" "
}
*/