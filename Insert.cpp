#include<iostream>
using namespace std;
#include<vector>
//#include<Bits.h>
#include<algorithm>
//Ö±½Ó²åÈëÅÅĞò
int* DirectInsert(int nums[],int n) {
	int*a = new int[n + 1];
	for (int m = n - 1; m >= 0; m--)
		a[m + 1] = nums[m];
	
	//sort(nums.begin(2),nums.end());
	//int n = nums.size();
	int i, j;
	for (i = 2; i <= n; i++)
	{
		if (a[i] <a[i - 1])
		{
			a[0] = a[i];
			for (j = i - 1; a[j]>a[0]; j--)
			{
				a[j + 1] =a[j];
			}
			a[j + 1] = a[0];
		}
	}
	/*for (int k= 0; k < n; k++)
	{
		nums[k] = nums[k + 1];
	}*/
	return a;

}
//ÕÛ°ë²åÈëÅÅĞò
int* HalfInsert(int nums[], int n)
{
	int*a = new int[n + 1];
	for (int m = n - 1; m >= 0; m--)
		a[m + 1] = nums[m];
	for (int i = 2; i <= n; i++)
	{
		a[0] = a[i];
			int start = 1;
		int end = i - 1;
		while (start <= end) 
		{
			int mid = (start + end) / 2;
		if (a[i] <= a[mid]) {
			end = mid - 1;
		}
		else {
			start = mid + 1;

		}
	}
		for (int j = i - 1; j >= start; j--) {
			a[j + 1] = a[j];
		}
		a[start] = a[0];
	}
	return a;
}
//Ã°ÅİÅÅĞò
int* BubbleSort(int nums[], int n) {
			
	for (int i = 0; i < n; i++)
	{	
		for (int j = 0; j < n - i-1; j++)
		{
			if (nums[j] > nums[j + 1]) {
				/*int temp;
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;*/
				swap(nums[j], nums[j + 1]);
			}
		}
	}
	return nums;
}
//Ã°ÅİÅÅĞò´øÓĞ±ê¼ÇÎ»
int* BubbleSort1(int nums[], int n) {

	bool Is_swap = true;
	for (int i = 0; i < n; i++)
	{
		Is_swap = false;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (nums[j] > nums[j + 1]) {
				int temp;
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
				Is_swap = true;
			}
			while (Is_swap == false)
				break;
		}
	}
	return nums;
}
//Ë«ÏòÃ°ÅİÅÅĞò
int* BubbleSort2(int nums[], int n) {

	for (int i = 0; i < (n+1)/2; i++)
	{
		for (int j = i; j < n - i - 1; j++)
		{
			if (nums[j] > nums[j + 1]) {
				int temp;
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;				
			}
		}
		for (int k = n - i - 2; k > i; k--)
		{
			if (nums[k] < nums[k - 1])
			{
				int tmp;
				tmp = nums[k];
				nums[k] = nums[k-1];
				nums[k-1] = tmp;
			}
		}
		for (int p = 0; p < n; p++) {
			cout << nums[p] << ' ';
		}
		cout << endl;
	}
	return nums;
}

//¿ìËÙÅÅĞò
int partition(int nums[], int low, int high)
{
	int pivot = nums[low];
	while (low <high)
	{
		if (nums[high] >= pivot)
		{
			high--;
		}
		nums[low] = nums[high];
		if (nums[low] <= pivot)
		{
			low++;
		}
		nums[high] = nums[low];
	} 
	nums[low] = pivot;
	return low;
}
int* QuickSort(int nums[], int low, int high)
{
	if (low < high)
	{
		int pos = partition(nums, low, high);
		QuickSort(nums, low, pos -1);
		QuickSort(nums, pos + 1, high);
	}
	return nums;
}
//¼òµ¥Ñ¡ÔñÅÅĞò
int* SelectSort(int nums[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int min = i;
		for (int j = i+1; j < n; j++)
		{
			//int temp = nums[i];
			if (nums[j] <nums[min])
			{
				min = j;
			}
		}
		swap(nums[i], nums[min]);
		for (int k = 0; k < n; k++)
			cout << nums[k] << ' ';
		    cout << endl;
	}
	return nums;
}
//int main() {
//	int a[]= { 1, 4, 5, 2, 6, 1, 7, 9 };
//	int *b=DirectInsert(a,8);
//	for (int i = 1; i <=8; i++)
//		cout << b[i] << ' ';
//	return 0;
//}

//int main() {
//	int a[] = {1,3,5,7,9,11,4};
//	int *b = HalfInsert(a, 7);
//	for (int i = 1; i <= 7; i++)
//		cout << b[i] << ' ';
//	return 0;
//}



//int main() {
//	/*int a[] = {25,84,21,47,15,27,25,35,20};
//	cout << sizeof(a) / sizeof(int)<<endl;
//	sort(a,&a[9]);
//	for (int i = 0; i <9; i++)
//				cout << a[i] << ' ';
//			return 0;*/
//	vector<int>a;
//	for (int i = 0; i < 10; i++)
//	{
//		a.insert(a.begin(), i);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout<<a[i]<<' ';
//	}
//}