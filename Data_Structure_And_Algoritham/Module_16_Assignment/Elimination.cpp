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
        int c = 0;
        while (1)
        {
            int sz = s.size();
            for (int i = 0; i < sz - 1; i++)
            {
                if (s[i] == '0' && s[i + 1] == '1')
                {
                    c++;
                    s.erase(i, 2);
                    // s.erase(i + 1);
                }
            }
            if (c == 0)
                break;
            c = 0;
        }
        if (s.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}