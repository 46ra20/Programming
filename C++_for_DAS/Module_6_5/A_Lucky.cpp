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
        int x = 0, y = 0;
        for (int i = 0, j = 3; i < 3; i++, j++)
        {
            x += (s[i] - '0');
            y += (s[j] - '0');
        }
        if (x == y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}