#include<iostream>
using namespace std;
int main() {
	int m,n;
	int*a = new int[n*m];
	cin >> m >> n;
	for (int i = 0; i < m*n; i++) {
		cin >> a[i];
	}
}