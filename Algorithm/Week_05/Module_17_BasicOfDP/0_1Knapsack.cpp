#include <bits/stdc++.h>
using namespace std;
int val[20], weight[20];
int dp[20][20];
int knaspack(int n, int w)
{
    if (n == 0 || w == 0)
        return 0;
    if (weight[n - 1] <= w)
    {
        int opt1 = knaspack(n - 1, w - weight[n - 1]) + val[n - 1];
        int opt2 = knaspack(n - 1, w);
        return max(opt1, opt2);
    }
    else
        return knaspack(n - 1, w);
}
int main()
{
    int n, w;
    cin >> n >> w;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        val[i] = b;
        weight[i] = a;
    }
    // cout << knaspack(n, w);
    dp[0][0] = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            if (weight[i] <= j)
            {
                int opt1 = dp[i - 1][j - weight[i - 1]] + val[i - 1];
                int opt2 = dp[i - 1][j];
                dp[i][j] = max(opt1, opt2);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            cout << dp[i][j] << "_|_";
            // cout << "__|";
        }
        // cout << endl;
        // for (int j = 0; j <= w; j++)
        // {
        //     cout << "-----";
        // }
        cout << endl
             << endl;
    }
    return 0;
}