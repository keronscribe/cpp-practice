// 给定k（1<k<100）个正整数，其中每个数都是大于等于1，小于等于10的数
// 写程序计算给定的k个正整数中，1，5和10出现的次数。

#include <iostream>
using namespace std;
int main()
{
	int nNums = 0;
	int five = 0;
	int one = 0;
	int time = 0;
	cin >> nNums;
	for (int i = 0; i < nNums; i += 1)
	{
		int n;
		cin >> n;
		if (n == 1)
			one += 1;
		else if (n == 5)
			five += 1;
		else if (n == 10)
			time += 1;
	}
	cout << one << endl;
	cout << five << endl;
	cout << time << endl;

	return 0;
}