#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    stack<int> c_st;
    while (!st.empty())
    {
        c_st.push(st.top());
        st.pop();
    }
    int x;
    cin >> x;
    st.push(x);
    while (!c_st.empty())
    {
        st.push(c_st.top());
        c_st.pop();
    }
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}