#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool isPalindrome(string s)
{
    bool res = true;
    string converted = "";
    for (int i = 0; i < s.size(); i++)
    {
        int cc = s[i];
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
    return res;
}

int main()
{
    string s = "race a car";
    cout << isPalindrome(s);

    return 0;
}