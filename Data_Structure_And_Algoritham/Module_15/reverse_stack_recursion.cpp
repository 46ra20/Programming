#include <bits/stdc++.h>
using namespace std;
void reverse(stack<int> &st)
{
    if (st.empty())
        return;
    int x = st.top();
    st.pop();
    reverse(st);
    st.push(x);
    // stack<int> c;
    // while (!st.empty())
    // {
    //     c.push(st.top());
    //     st.pop();
    // }
    // c.push(x);
    // while (!c.empty())
    // {
    //     st.push(c.top());
    //     c.pop();
    // }
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    reverse(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}