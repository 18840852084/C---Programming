#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> a = {1,3,4,6,7};
	vector<vector<int>> b = { {1,3,4},{10,4,5},{4,5,6} };
	//cout << a.size() << a[0];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 1; j < 3; j++) {
			cout << b[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;


}