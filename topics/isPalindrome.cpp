#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st = "0P";
    bool res = true;
    string converted = "";
    for (int i = 0; i < st.size(); i++)
    {
        int cc = st[i];
        if (cc >= 65 and cc <= 90)
        {
            converted += cc - 'A' + 'a';
        }
        else if (cc >= 97 and cc <= 122)
        {
            converted += cc;
        }
        else if (cc >= 48 and cc <= 57)
        {
            converted += cc;
        }
    }
    int left = 0;
    int right = converted.size() - 1;

    while (left < right)
    {
        if (converted[left] == converted[right])
        {
            left++;
            right--;
            continue;
        }
        else
        {
            res = false;
            break;
        }
    }

    cout << res;
    return 0;
}