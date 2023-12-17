#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int size()
    {
        return v.size();
    }
    int top()
    {
        return v.back();
    }
    bool empty()
    {
        return v.empty();
    }
};
int main()
{
    myStack st;
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < 6; i++)
    {
        if (!st.empty())
        {
            cout << st.top() << endl;
            st.pop();
        }
        else
            cout << "No Element" << endl;
    }
    return 0;
}