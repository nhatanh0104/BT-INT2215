#include <iostream>

using namespace std;

void printMatrix(int n)
{
	for (int i = n; i > 0; i--)
	{
		for (int j = n - i + 1; j <= n; j++)
			cout << j << " ";
		for (int j = 1; j < n - i + 1; j++)
			cout << j << " ";
		cout << "\n";
	}
}

int main()
{
	int n;
	cout << "Submit a number smaller than 100 to print a matrix:\n";
	cin >> n;
	while (n >= 100)
	{
		cout << "Your number is larger than 100, please submit another number:\n";
		cin >> n;
	}
	printMatrix(n);
	return 0;
}
