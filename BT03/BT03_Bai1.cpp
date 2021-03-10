#include <iostream>

using namespace std;

void nhapDuLieu(int arr[], int n)
{
    for(int i=0; i<n; i++)
        cin >> arr[i];
}

double tinhTB(int arr[], int n)
{
    double TB = 0;
    for(int i=0; i<n; i++)
    {
        TB += arr[i];
    }
    TB /= n;
    return TB;
}

double tinhPhuongSai(int arr[], int n)
{
    double tb = 0;
    for(int i=0; i<n; i++)
        tb += arr[i];
    tb /= n;
    double phuongSai = 0;
    for (int i=0; i<n; i++)
    {
        phuongSai += (arr[i] - tb)*(arr[i] - tb);
    }
    phuongSai /= n;
    return phuongSai;
}

int main()
{
    int n;
    cin >> n;
    int number[n];
    nhapDuLieu(number, n);
    cout << tinhTB(number, n) << "\n";
    cout << tinhPhuongSai(number, n);
    return 0;
}


