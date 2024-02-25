#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, e;
    cin >> n >> e;
    ll adj[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            adj[i][j] = 1e+16;
            if (i == j)
                adj[i][j] = 0;
        }
    }
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (adj[a][b] > c)
            adj[a][b] = c;
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int i, j;
        cin >> i >> j;
        if (adj[i][j] == 1e+16 || i > n || j > n || i < 1 || j < 1)
            cout << "-1" << endl;
        else
            cout << adj[i][j] << endl;
    }
    return 0;
}