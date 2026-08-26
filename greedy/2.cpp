#include <bits/stdc++.h>
using namespace std;

/*
27
*/
int main()
{

    int n;
    cin >> n;

    while (n>0)
    {
        int lastDigit = n % 10;
        int dif = 9 - lastDigit;
        if (dif < lastDigit)
        {
            cout << dif;
        }
        else
        {
            cout << lastDigit;
        }
        n = n / 10;
    }
    return 0;
}