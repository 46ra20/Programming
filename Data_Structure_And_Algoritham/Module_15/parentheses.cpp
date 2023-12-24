#include <bits/stdc++.h>
using namespace std;
bool parentheses(string s)
{
    stack<char> ch;
    // if (s.size() == 1)
    //     return false;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
            ch.push(c);
        else
        {
            if (c == ')' && ch.top() == '(')
            {
                ch.pop();
            }
            else if (c == '}' && ch.top() == '{')
            {
                ch.pop();
            }
            if (c == ']' && ch.top() == '[')
            {
                ch.pop();
            }
            else
            {
                return false;
            }
        }
        cout << c << endl;
    }

    return ch.empty();
}
int main()
{
    string s;
    cin >> s;
    cout << s << endl;
    // if(s.empty())
    bool flag;
    flag = parentheses(s);
    cout << flag;
    return 0;
}