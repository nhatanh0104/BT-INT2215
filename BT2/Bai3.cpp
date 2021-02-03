#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    cout << "\n";
    if(a+b>c && b+c>a && c+a>b)
    {
        cout << "Chu vi tam giac la: " << a+b+c << "\n";
        if(a==b && b==c)
            cout << "Day la tam giac deu.\n";
        else if(a==b || b==c || c==a)
            cout << "Day la tam giac can.\n";
        else if(a*a + b*b == c*c ||
                b*b + c*c == a*a ||
                c*c + a*a == b*b)
            cout << "Day la tam giac vuong.\n";
        else cout << "Day la tam giac thuong.\n";
    }
    else cout << "Day khong phai do dai 3 canh cua 1 tam giac.\n";

    return 0;
}


