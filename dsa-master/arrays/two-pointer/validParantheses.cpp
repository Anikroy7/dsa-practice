#include <bits/stdc++.h>
using namespace std;

/*
    [{()}]
           ([{]})
*/
int main()
{

    string brakets;
    cin >> brakets;
    stack<char> st;

    bool res = true;

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
                res = false;
                break;
            }
            char sf = st.top();
            if ((curr == ')' and sf == '(') || (curr == '}' and sf == '{') || (curr == ']' and sf == '['))
            {
                st.pop();
            }
            else
            {
                res = false;
                break;
            }
        }
    }
    if (!st.empty())
        res = false;
    if (res)
    {
        cout << "yes";
    }
    else
        cout << "no";
    return 0;
}