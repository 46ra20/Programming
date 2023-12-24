#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    stack<int> st;
    stack<int> st_2;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty())
    {
        st_2.push(st.top());
        st.pop();
    }
    while (!st_2.empty())
    {
        cout << st_2.top() << " ";
        st_2.pop();
    }
    return 0;
}