#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, w;
    cin >> n >> w;
    int val[n], cost[n];
    int dp[n + 1][w + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> val[i] >> cost[i];
    }
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
            if (i == 0 || j == 0)
                dp[i][j] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            if (cost[i - 1] <= j)
            {
                int opt1 = dp[i - 1][j - cost[i - 1]] + val[i - 1];
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
            if (i == 0)
                cout << " " << dp[i][j] << " ";
            else
                cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}