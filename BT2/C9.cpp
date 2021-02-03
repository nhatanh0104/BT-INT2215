#include <iostream>

using namespace std;

int main()
{
    long long minA = 1000000;
    long long minB = 1000000;
    int n;
    cin >> n;
    long long a[n][2];
    for(int i=0; i<n; i++)
        for(int j=0; j<2; j++)
            cin >> a[i][j];
    for (int i=0; i<n ;i++)
    {
        if(a[i][0] < minA) minA = a[i][0];
        if(a[i][1] < minB) minB = a[i][1];
    }
    cout << minA*minB << "\n" ;
    return 0;
}



