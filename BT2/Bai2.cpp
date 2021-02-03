#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    int y;
    cin >> x >> y;
    double product = 1;
    for (int i=0; i<y; i++)
        product *= x;
    cout << product << "\n";
    double powProduct = pow(x, y);
    cout << product - powProduct;
    return 0;
}



