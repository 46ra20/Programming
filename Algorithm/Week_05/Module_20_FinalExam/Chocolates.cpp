#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        vector<int> v;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            sum += x;
        }
        if (sum % 2 != 0)
            cout << "NO" << endl;
        else
        {
            int s = sum / 2;
            bool dp[n + 1][s + 1];
            dp[0][0] = 1;
            for (int i = 1; i <= s; i++)
                dp[0][i] = 0;
            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j <= s; j++)
                {
                    if (v[i - 1] <= j)
                    {
                        dp[i][j] = dp[i - 1][j - v[i - 1]] || dp[i - 1][j];
                    }
                    else
                    {
                        dp[i][j] = dp[i - 1][j];
                    }
                }
            }
            if (dp[n][s])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}