#include <iostream>

using namespace std;

void printBool (bool myB)
{
    if(myB == true) cout << "Yes";
    else cout << "No";
}

int main()
{
    int n;
    cin >> n;
    bool seen[n];
    bool flag = false;
    for(int i=0; i<n; i++)
    {
        int tmp;
        cin >> tmp;
        if(seen[tmp] == false) seen[tmp] = true;
        else {
            flag = true;
            break;
        }
    }
    printBool(flag);
    return 0;
}

