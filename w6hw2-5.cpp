/*从键盘输入一个任意的三位整数，要求正确地分离出它的百位、十位和个位数，并分别在屏幕上输出，输出采用每行输出一个数的方式，不带其它符号。*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int num = 0;

	cin >> num;
	cout << ceil(num / 100) << endl;
	num = num % 100;
	cout << ceil(num / 10) << endl;
	num = num % 10;
	cout << num << endl;
}