
#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	cin >> count;
	char a[100];
	for (int i = 0; i < count; i += 1)
	{
		cin >> a[i];
	}
	for (int i = count - 1; i >= 0; i -= 1)
	{
		cout << a[i];
		if (i > 0)
			cout << " ";
	}
	return 0;
}
