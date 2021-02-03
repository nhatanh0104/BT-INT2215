#include <iostream>

using namespace std;

void printTriangle(int n)
{
	for (int i = n; i > 0; i--)
	{
		for (int j = n - i; j > 0; j--)
			cout << " ";
		for (int j = i; j > 0; j--)
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


