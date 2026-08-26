#include <bits/stdc++.h>
using namespace std;

/*
5
3 2 5 1 7
*/
int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long ans = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            ans+= arr[i - 1] - arr[i];
            arr[i]= arr[i-1];
        }
    }
    printf("%lld", ans);
    return 0;
}