#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> qu;
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
    for (int i = 0; i < m; i++)
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