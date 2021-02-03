#include <iostream>

using namespace std;

void printTriangle(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < n - i; j++)
			cout << " ";
		for (int j = 0; j < i*2-1; j++)
			cout << "*";
		cout << "\n";
	}
}

int main()
{
	int n;
	cin >> n;
	printTriangle(n);
	return 0;
}



