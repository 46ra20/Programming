#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> li;
    void push(int val)
    {
        li.push_back(val);
    }
    void pop()
    {
        li.pop_back();
    }
    int top()
    {
        return li.back();
    }
    bool empty()
    {
        return li.empty();
    }
    int size()
    {
        return li.size();
    }
};
class myQueue
{
public:
    list<int> li;
    void push(int val)
    {
        li.push_back(val);
    }
    void pop()
    {
        li.pop_front();
    }
    int front()
    {
        return li.front();
    }
    bool empty()
    {
        return li.empty();
    }
    int size()
    {
        return li.size();
    }
};
int main()
{
    myStack st;
    myQueue qu;
    int n, m;
    cin >> n >> m;
    bool flag = true;
    if (n != m)
        flag = false;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        qu.push(x);
    }

    while (!st.empty())
    {
        if (st.top() != qu.front())
        {
            flag = false;
        }
        st.pop();
        qu.pop();
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}