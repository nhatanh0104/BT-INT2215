#include <iostream>
#include <vector>

using namespace std;

bool isPalindromes(int n)
{
    vector<int> numberOfN;
    bool flag = true;
    while(n)
    {
        int tmp = n%10;
        numberOfN.push_back(tmp);
        n /= 10;
    }
    for(int i=0; i<numberOfN.size()/2; i++)
    {
        if(numberOfN[i] != numberOfN[numberOfN.size() - i - 1])
        {
            flag = false;
            break;
        }
    }
    return flag;
}


int countPalindromes(int a, int b)
{
    int count = 0;
    for(int i=a; i<=b; i++)
    {
        if(isPalindromes(i) == true) count++;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << countPalindromes(a, b) << "\n";
    }
    return 0;
}
