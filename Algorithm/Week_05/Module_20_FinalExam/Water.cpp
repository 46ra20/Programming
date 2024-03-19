#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int mx = INT_MIN, ai = -1, aj = -1;
        for (int i = 0; i < n; i++)
        {
            if (mx < v[i])
            {
                mx = v[i];
                ai = i;
            }
        }
        mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (mx < v[i] && ai != i)
            {
                mx = v[i];
                aj = i;
            }
        }
        if (ai < aj)
            cout << ai << " " << aj << endl;
        else
            cout << aj << " " << ai << endl;
    }
    return 0;
}