#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> setZeroes(vector<vector<int>>& matrix) {
	int m = matrix.size();
	int n = matrix[0].size();
	vector<int>row(m);
	vector<int>column(n);
	//初始化二维数组
	/*vector<vector<int>>res(m);
	for (int p = 0; p < m; p++) {
		res[p].resize(n);
	}*/
	for (int i = 0; i<m; i++) {
		for (int j = 0; j<n; j++) {
			if (matrix[i][j] == 0) {
				row.push_back(i);
				column.push_back(j);
			}		
		}	
	}
	for (int i = 0; i < row.size(); i++) {
		for (int j = 0; j < n; j++) {
			matrix[row[i]][j] = 0;
		}
	}
	for (int i = 0; i < column.size(); i++) {
		for (int j = 0; j < m; j++) {
			matrix[j][column[i]]= 0;
		}
	}
	return matrix;
}
//int main() {
//	vector<vector<int>> matrix = { {0,0,0,5},{4,3,1,4},{0,1,1,4},{1,2,1,3},{0,0,1,1} };
//	vector<vector<int>> result(5);
//	for (int k = 0; k < 5; k++) {
//		result[k].resize(4);
//	}
//	result = setZeroes(matrix);
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 4; j++) {
//			cout << matrix[i][j] << ' ';
//		}
//		cout << endl;
//	}
//	cout << endl;
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 4; j++) {
//			cout << result[i][j] << ' ';
//		}
//		cout << endl;
//	}
//}

