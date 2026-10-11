#include <bits/stdc++.h>
using namespace std;

class MinStack
{
public:
    stack<pair<int, int>> st;
    MinStack()
    {
    }

    void push(int value)
    {
        if (st.empty())
        {
            st.push(make_pair(value, value));
        }
        else
        {
            st.push(make_pair(value, min(st.top().second, value)));
        }
    }

    void pop()
    {
        st.pop();
    }

    int top()
    {
        return st.top().first;
    }

    int getMin()
    {
        return st.top().second;
    }
};

int main()
{

    MinStack *ms = new MinStack();
    ms->push(5);
    ms->push(8);
    ms->push(8);
    ms->push(1);
    cout << ms->getMin();
    return 0;
}