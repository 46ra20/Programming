#include <bits/stdc++.h>
using namespace std;
int dp[100][100];
int knapsack(int n, int *v, int *worst, int w)
{
    if (n == 0 || w == 0)
        return 0;
    if (dp[n][w] != -1)
        return dp[n][w];
    if (worst[n - 1] <= w)
    {
        return dp[n][w] = max(knapsack(n - 1, v, worst, w - worst[n - 1]) + v[n - 1], knapsack(n - 1, v, worst, w));
    }
    else
        return dp[n][w] = knapsack(n - 1, v, worst, w);
}
int main()
{
    int n, w;
    cin >> n >> w;
    int v[n], worst[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i] >> worst[i];
    }
    memset(dp, -1, sizeof(dp));
    cout << knapsack(n, v, worst, w);
    return 0;
}