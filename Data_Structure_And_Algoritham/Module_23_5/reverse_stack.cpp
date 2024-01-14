// void reverseStack(stack<int> &st) {

//     // Write your code here
//     if(st.empty()) return;
//     int x = st.top();
//     st.pop();
//     reverseStack(st);
//     stack<int>c;
//     while(!st.empty()){
//         c.push(st.top());
//         st.pop();
//     }
//     st.push(x);
//     while(!c.empty()){
//         st.push(c.top());
//         c.pop();
//     }
// }

#include <bits/stdc++.h>
using namespace std;
void reversStack(stack<int> &s)
{
    if (s.empty())
        return;
    int x = s.top();
    s.pop();
    reversStack(s);
    stack<int> st;
    while (!s.empty())
    {
        st.push(s.top());
        s.pop();
    }
    s.push(x);
    while (!st.empty())
    {
        s.push(st.top());
        st.pop();
    }
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    stack<int> tem;
    tem = s;
    while (!tem.empty())
    {
        cout << tem.top() << " ";
        tem.pop();
    }
    cout << endl;
    reversStack(s);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}