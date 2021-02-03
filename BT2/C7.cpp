#include <iostream>

using namespace std;


int main()
{
	int n;
	int x = -100;
	do
	{
		cin >> n;
		if (x != n)
		{
			cout << n << " ";
		}
		x = n;
	} while (n >= 0);
	return 0;
}
