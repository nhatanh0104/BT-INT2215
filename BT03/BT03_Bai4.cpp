#include <iostream>
#include <vector>

using namespace std;

void pascalTriangle(int n)
{
    vector<int> pascal;
    for (int i=1; i<=n; i++)
    {
        pascal.push_back(1);
        for(int j=pascal.size()-2; j>0; j--)
            pascal[j] += pascal[j-1];
        for(int j=0; j<pascal.size(); j++)
            cout << pascal[j] << " ";
        cout << "\n";
    }
}

int main()
{
    int n;
    cin >> n;
    pascalTriangle(n);
    return 0;
}


