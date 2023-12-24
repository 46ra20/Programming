#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    queue<int> q_c;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    stack<int> st;
    for (int i = 0; i < 3; i++)
    {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty())
    {
        q_c.push(st.top());
        st.pop();
    }
    while (!q.empty())
    {
        q_c.push(q.front());
        q.pop();
    }
    while (!q_c.empty())
    {
        cout << q_c.front() << " ";
        q_c.pop();
    }

    return 0;
}