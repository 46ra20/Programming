#include <bits/stdc++.h>
using namespace std;
bool backspace_string(string s, string t)
{
    stack<char> s1, s2;
    for (char c : s)
    {
        if (c == '#')
        {
            if (s1.empty())
                continue;
            s1.pop();
        }
        else
            s1.push(c);
    }
    for (char c : t)
    {
        if (c == '#')
        {
            if (s2.empty())
                continue;
            s2.pop();
        }
        else
            s2.push(c);
    }
    return s1 == s2;
}
int main()
{
    string s, t;
    cin >> s >> t;
    bool flag = backspace_string(s, t);
    cout << flag << endl;
    return 0;
}