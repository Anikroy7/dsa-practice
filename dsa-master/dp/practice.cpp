#include <bits/stdc++.h>
using namespace std;

// fibonacci sequence
/* 0 1 2 3 4 5 6
   0 1 1 2 3 5 8
*/

vector<int> dp(100, -1);

int fibo(int n)
{
    if (n == 0 || n == 1)
        return n;

    if (dp[n]!=-1)
        return dp[n];

    int res= fibo(n - 1) + fibo(n - 2);
    dp[n]= res;

    return res;
}

int main()
{

    cout << fibo(5);
    return 0;
}