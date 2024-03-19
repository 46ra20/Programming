#include <bits/stdc++.h>
using namespace std;
int unboundedKnapsack(int n, int *val, int *w, int s)
{
    if (n == 0 || s == 0)
        return 0;
    if (w[n - 1] <= s)
    {
        return max(val[n - 1] + unboundedKnapsack(n - 1, val, w, s - w[n - 1]), unboundedKnapsack(n - 1, val, w, s));
    }
    else
        return unboundedKnapsack(n - 1, val, w, s);
}
int main()
{
    int n;
    cin >> n;
    int val[n], w[n];
    for (int i = 0; i <= n; i++)
    {
        cin >> val[i];
        w[i] = i + 1;
    }
    int s;
    cin >> s;
    int dp[n + 1][s + 1];
    // cout << unboundedKnapsack(n, val, w, s);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (w[i - 1] <= j)
            {
                dp[i][j] = max(dp[i - 1][j - w[i - 1]] + val[i - 1], dp[i - 1][j]);
            }
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    cout << endl;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int w[n];
//     for (int i = 0; i < n; i++)
//         cin >> w[i];
//     int s;
//     cin >> s;
//     bool dp[n + 1][s + 1];
//     dp[0][0] = 1;
//     for (int i = 0; i <= n; i++)
//     {
//         dp[0][i] = 0;
//         // for (int j = 0; j <= s; j++)
//         //     if (i == 0 || j == 0)
//         //         dp[i][j] = 0;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 0; j <= s; j++)
//         {
//             if (w[i - 1] <= j)
//                 dp[i][j] = dp[i][j - w[i - 1]] or dp[i - 1][j];
//             else
//                 dp[i][j] = dp[i - 1][j];
//         }
//     }
//     // cout << dp[n][s];
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j <= s; j++)
//             cout << dp[i][j] << " ";
//         cout << endl;
//     }
//     return 0;
// }