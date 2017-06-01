#include <iostream>
using namespace std;
/*动态输入二维数组的两种方法*/
int main() {
	int n,m;
	cin >> n>>m;
	int *a = new int[m*n];
	
	for (int i = 0; i < n*m; i++) {
		
			cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i*m+j]<<" ";
		}
		cout << endl;
	}
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