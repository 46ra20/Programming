#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "(])";
    bool fg = true;
    int n = s.size();
    stack<char> ch;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '[' or s[i] == '{' or s[i] == '(')
        {
            ch.push(s[i]);
        }
        else
        {
            if (ch.empty())
            {
                fg = false;
                break;
            }
            else if (s[i] == ']')
            {
                if (ch.top() == '[')
                    ch.pop();
                else
                    fg = false;
            }
            else if (s[i] == '}')
            {
                if (ch.top() == '{')
                    ch.pop();
                else
                    fg = false;
            }
            else if (s[i] == ')')
            {
                if (ch.top() == '(')
                    ch.pop();
                else
                    fg = false;
            }
        }
    }

    cout << fg;
    return 0;
}