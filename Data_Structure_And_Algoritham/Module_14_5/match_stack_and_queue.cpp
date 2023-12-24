#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> mq;
    int n, m;
    cin >> n;
    int tem = n;
    while (tem--)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    cin >> m;
    tem = m;
    while (tem--)
    {
        int x;
        cin >> x;
        mq.push(x);
    }

    bool flag = true;
    if (n != m)
        flag = false;
    else
    {
        while (!st.empty())
        {
            if (st.top() != mq.front())
            {
                flag = false;
                break;
            }
            st.pop();
            mq.pop();
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}