#include <bits/stdc++.h>
using namespace std;

/*
   5 4 1 3 7 9 3
   n= 7
   k= 4
   print max and min value from k size of sub array.

*/

// brutforce way
void solveOne()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    int value;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        arr[i] = value;
    }

    for (int i = 0; i <= n - k; i++)
    {
        int mx = INT_MIN;
        int mn = INT_MAX;
        for (int j = i; j < k + i; j++)
        {
            mx = max(mx, arr[j]);
            mn = min(mn, arr[j]);
        }
        cout << "max: " << mx << " min: " << mn << endl;
    }
}

// sliding window way only work for distinct value
void solveTwo()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    int value;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        arr[i] = value;
    }

    set<int> st;
    for (int i = 0; i < k; i++)
    {
        st.insert(arr[i]);
    }
    cout << *st.begin() << " " << *st.rbegin() << endl;

    for (int i = 1; i < n - k + 1; i++)
    {
        st.erase(arr[i - 1]);
        st.insert(arr[i + k - 1]);
        cout << *st.begin() << " " << *st.rbegin() << endl;
    }
}

// void work for duplicate value aslo
void solveThree()
{

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    int value;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        arr[i] = value;
    }

    set<pair<int, int>> st;
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        st.insert({arr[i], i});
        sum += arr[i];
    }

    //-- print total max sum or (max/min) value
    
    // cout << sum << endl;
    // cout << (*st.begin()).first << " " << (*st.rbegin()).first << endl;
    // 1 1 4 3 5 7
    for (int i = 1; i < n - k + 1; i++)
    {
        int newSum = sum - (*st.begin()).first;
        st.erase(*st.begin());
        st.insert({arr[i + k - 1], i});
        newSum += arr[i + k - 1];
        sum = max(newSum, sum);
        // cout << (*st.begin()).first << " " << (*st.rbegin()).first << endl;
    }
    cout << sum << endl;
}

int main()
{

    // print max and min value from k size of sub array bruitforce approach
    // solveOne();

    // print max and min value from k size of sub array sliding window approach
    // solveTwo();

    // aslo work for duplicate value
    solveThree();

    return 0;
}