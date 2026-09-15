#include <bits/stdc++.h>
using namespace std;

bool isValid(string brakets)
{
    stack<char> st;

    for (int i = 0; i < brakets.size(); i++)
    {
        char curr = brakets[i];
        if (curr == '[' || curr == '{' || curr == '(')
        {
            st.push(curr);
        }
        else
        {
            if (st.empty())
            {
                return false;
            }
            char sf = st.top();
            if ((curr == ')' and sf == '(') ||
                (curr == '}' and sf == '{') ||
                (curr == ']' and sf == '['))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    if (!st.empty())
        return false;
    ;

    return true;
}

int main()
{

    cout << isValid("{[]}");

    return 0;
}