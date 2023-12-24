#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st_0, st_1;
        for (char c : s)
        {
            if (c == '0')
            {
                st_0.push(c);
                if (!st_1.empty())
                {
                    if (!st_0.empty())
                        st_0.pop();
                    st_1.pop();
                }
            }
            else if (c == '1')
            {
                st_1.push(c);
                if (!st_0.empty())
                {
                    if (!st_1.empty())
                        st_1.pop();
                    st_0.pop();
                }
            }
        }
        if (st_0.empty() && st_1.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s = "0011";
//     stack<char> st_0, st_1;
//     for (char c : s)
//     {
//         if (c == '0')
//         {
//             st_0.push(c);
//             // if (!st_1.empty())
//             //     st_1.pop();
//         }
//         else if (c == '1')
//         {
//             st_1.push(c);
//             // if (!st_0.empty())
//             //     st_0.pop();
//         }
//     }
//     if (st_0.size() == st_1.size())
//         cout << "YES" << endl;
//     return 0;
// }