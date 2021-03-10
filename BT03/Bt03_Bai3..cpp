#include <iostream>

using namespace std;

int main()
{
    int myNumber;
    cin >> myNumber;
    int countt[10] = {0};
    while(myNumber)
    {
        int tmp = myNumber%10;
        countt[tmp]++;
        myNumber /= 10;
    }
    for(int i=0; i<10; i++)
    {
        cout << i << " " << countt[i] << "\n";
    }
    return 0;
}


