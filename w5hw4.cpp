
#include <iostream>
using namespace std;
int main()
{
	int count = 0;
	cin >> count;

	for (int i = 0; i < count; i += 1)
	{
		int result = 0;
		int rest = 0;
		cin >> rest;
		while (rest)
		{
			if (rest % 2 == 1)
			{
				result += 1;
			}
			rest = rest / 2;
		}
		cout << result << endl;
	}
	return 0;
}