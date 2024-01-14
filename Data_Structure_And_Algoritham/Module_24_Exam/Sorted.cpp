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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        // auto it = unique(v.begin(), v.end());
        // v.resize(v.begin(),v.begin()+*it);
        for (int val : v)
        {
            int x;
            if (x == val)
                continue;
            cout << val << " ";

            x = val;
        }
        cout << endl;
    }
    return 0;
}