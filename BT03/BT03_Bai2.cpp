#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int number[n];
    for(int i=0; i<n; i++)
    {
        cin >> number[i];
    }
    int minNumber = number[1], maxNumber = number[1], oddSum = 0, evenSum = 0;
    for (int i=0; i<n; i++)
    {
        if(number[i] > maxNumber) maxNumber = number[i];
        if(number[i] < minNumber) minNumber = number[i];
        if(number[i]%2 == 0) evenSum += number[i];
        if(number[i]%2 != 0) oddSum += number[i];
    }
    cout << maxNumber << "\n";
    cout << minNumber << "\n";
    cout << evenSum << "\n";
    cout << oddSum;
    return 0;
}



