#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> qu;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        qu.push(x);
    }
    stack<int> st;
    while (!qu.empty())
    {
        st.push(qu.front());
        qu.pop();
    }
    while (!st.empty())
    {
        qu.push(st.top());
        st.pop();
    }
    while (!qu.empty())
    {
        cout << qu.front() << " ";
        qu.pop();
    }
    return 0;
}