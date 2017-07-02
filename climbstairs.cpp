#include<iostream>
#include<time.h>
using namespace std;
int climbingStairs(int n) {
	if (n<=2)
	{
		return n;
	}
	else {
		int*sum = new int[n];
		sum[0] = 1;
		sum[1] = 2;
		for (int i = 2; i < n; i++)
		{
			sum[i] = sum[i - 1] + sum[i - 2];
		}
		return sum[n-1];
	}

}
/*int main() {
	int m;
	cin >> m;
	time_t start = time(NULL);


	int n = climbingStairs(m);
	cout << n << endl;
	time_t end = time(NULL);
	cout << end - start << endl;

	system("pause");
	return 0;
}*/