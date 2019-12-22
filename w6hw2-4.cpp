/*
输入6个正整数，且这6个正整数中至少存在一个奇数和一个偶数。
设这6个正整数中最大的奇数为a，最小的偶数为b，求出|a-b|的值

输入
输入为一行，6个正整数,且6个正整数都小于100
输入保证这6个数中至少存在一个奇数和一个偶数

输出
输出为一行，输出最大的奇数与最小的偶数之差的绝对值*/
#include <iostream>
using namespace std;
int main()
{
	int nums[6];
	for (int i = 0; i < 6; i++)
	{
		cin >> nums[i];
	}

	int maxOdd = 0;
	int minEven = 100;
	for (int i = 0; i < 6; i++)
	{
		if (nums[i] % 2 == 0)
		{

			if (nums[i] < minEven)
			{
				minEven = nums[i];
			}
		}
		else
		{
			if (nums[i] > maxOdd)
			{
				maxOdd = nums[i];
			}
		}
	}
	int result = abs(maxOdd - minEven);

	cout << result;
	return 0;
}