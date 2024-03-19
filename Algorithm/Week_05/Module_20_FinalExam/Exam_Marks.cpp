#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
bool knaspack(int n, int s, int *a)
{
    if (n == 0)
        return s == 0;
    if (dp[n][s] != -1)
        return dp[n][s];
    if (a[n - 1] <= s)
    {
        dp[n][s] = knaspack(n - 1, s - a[n - 1], a) || knaspack(n - 1, s, a);
        return dp[n][s];
    }
    else
    {
        dp[n][s] = knaspack(n - 1, s, a);
        return dp[n][s];
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= 1000 - m; j++)
                dp[i][j] = -1;
        }
        if (knaspack(n, 1000 - m, arr))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, m;
//         cin >> n >> m;
//         vector<ll> v;
//         for (int i = 0; i < n; i++)
//         {
//             ll x;
//             cin >> x;
//             v.push_back(x);
//         }

//         ll extra = 1000 - m;
//         bool dp[n + 1][extra + 1];
//         dp[0][0] = true;
//         for (int i = 1; i <= extra; i++)
//             dp[0][i] = false;
//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 0; j <= extra; j++)
//             {
//                 if (v[i - 1] <= extra)
//                 {
//                     dp[i][j] = dp[i - 1][j - v[i - 1]] || dp[i - 1][j];
//                 }
//                 else
//                 {
//                     dp[i][j] = dp[i - 1][j];
//                 }
//             }
//         }

//         if (dp[n][extra])
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
//     return 0;
// }