/*输入十个整数，将十个整数按升序排列输出，并且奇数在前，偶数在后。*/

#include <iostream>
using namespace std;

int main()
{
	//設定變量
	int a[10];
	//接受 input 放入所有
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	int l = 0, r = 9;
	// 開闢兩個變量，左區l和右區r，分別賦值0 和9
	while (l <= r)
	{
		// 宣告兩個變量 leftIsOdd 和	rightIsEevn ，分別把奇數和偶數放進去。
		bool leftIsOdd = a[l] % 2 == 1;
		bool rightIsEven = a[r] % 2 == 0;
		if (leftIsOdd)
		{
			l++;
		}
		else if (rightIsEven)
		{
			r--;
		}
		else if (!rightIsEven && !leftIsOdd)
		{
			int temp = a[l];
			a[l] = a[r];
			a[r] = temp;
		}
	}
	// 對左邊進行冒泡排序
	int start = 0, end = l;
	for (int i = start; i < end - 1; i++)
	{
		for (int j = start + 1; j < start + end - i; j++)
		{
			if (a[j - 1] > a[j])
			{
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
	//對右邊進行排序
	start = l, end = 10;
	for (int i = start; i < end - 1; i++)
	{
		for (int j = start + 1; j < start + end - i; j++)
		{
			if (a[j - 1] > a[j])
			{
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
	//印出所有數
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}