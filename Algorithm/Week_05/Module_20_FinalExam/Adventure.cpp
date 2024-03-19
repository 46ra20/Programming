#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e3 + 5;
ll value[N];
ll weight[N];
ll dp[N][N];
ll knaspack(ll n, ll w)
{
    if (n == 0 || w == 0)
        return 0;
    if (weight[n - 1] <= w)
    {
        return max(value[n - 1] + knaspack(n - 1, w - weight[n - 1]), knaspack(n - 1, w));
    }
    else
        return knaspack(n - 1, w);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, w;
        cin >> n >> w;
        for (int i = 0; i < n; i++)
        {
            cin >> weight[i];
        }
        for (int i = 0; i < n; i++)
            cin >> value[i];

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
                if (weight[i - 1] <= j)
                {
                    dp[i][j] = max(value[i - 1] + dp[i - 1][j - weight[i - 1]], dp[i - 1][j]);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        cout << dp[n][w] << endl;
        // cout << knaspack(n, w) << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int N = 1e3 + 5;
// ll weight[N], value[N];
// ll dp[N];
// ll knapcak(ll n, ll w)
// {
//     if (n == 0 || w == 0)
//         return 0;
//     if (dp[n] != -1)
//         return dp[n];
//     if (weight[n - 1] <= w)
//     {
//         dp[n - 1] = max(value[n - 1] + knapcak(n - 1, w - weight[n - 1]), knapcak(n - 1, w));
//         return dp[n - 1];
//     }
//     else
//     {
//         dp[n - 1] = knapcak(n - 1, w);
//         return dp[n - 1];
//     }
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, w;
//         cin >> n >> w;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> weight[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> value[i];
//         }
//         memset(dp, -1, sizeof(dp));
//         cout << knapcak(n, w) << endl;
//     }

//     return 0;
// }