#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    for (int i = 0; i < 8; i++)
    {
        int x;
        cin >> x;
        st.push(x);
        // st.pu
    }
    // for (int i = 0; i < 8; i++)
    // {
    //     if (!st.empty())
    //     {
    //         cout << st.top() << endl;
    //         // st.pop();
    //     }
    // }
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}