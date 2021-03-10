#include <iostream>

using namespace std;

void printBool (bool myB)
{
    if(myB == true) cout << "Yes";
    else cout << "No";
}

bool kiemTraDoiXung(string myStr)
{
    bool doiXung = true;
    for(int i=0; i<myStr.length()/2;i++)
    {
        if(myStr[i] != myStr[myStr.length() - i - 1]) doiXung = false;
    }
    return doiXung;
}

int main()
{
    string S;
    cin >> S;
    bool doiXung = kiemTraDoiXung(S);
    printBool(doiXung);
    return 0;
}
