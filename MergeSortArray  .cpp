#include<iostream>
using namespace std;
int* merge(int nums1[], int m, int nums2[], int n) {
	//int m=nums1.size();
	//int n=nums2.size();
	int *num = new int[m + n];
	int i = 0;
	int j = 0;
	int k = 0;
	while (i<m&&j<n)
	{
		if (nums1[i] <= nums2[j])
		{
			num[k++] = nums1[i++];
		}
		else
		{
			num[k++] = nums2[j++];
		}

	}


	while (i<m) {
		num[k++] = nums1[i++];
	}
	while (j< n) {
		num[k++] = nums2[j++];
	}

	return num;

}
/*int main()
{
	int a[] = { 2,4,5,6,7 };
	int b[] = { 1,4,6,7,11,15,18,19 };
	int*c = merge(a, 5, b, 8);

	for (int i = 0; i < 13; i++)
	{
		cout << c[i] << ' ';

	}
	system("pause");
	return 0;
}*/