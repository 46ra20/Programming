#include <bits/stdc++.h>
using namespace std;
void subarray(int k, int n, int *a)
{
    if (n == k)
        return;
    for (int i = k; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    subarray(k + 1, n, a);
    subarray(k, n - 1, a);
}

int knapsack(int n, int *v, int *w, int cost)
{
    if (n == 0 || cost == 0)
        return 0;
    if (w[n - 1] <= cost)
    {
        int opt1 = knapsack(n - 1, v, w, cost - w[n - 1]) + v[n - 1];
        int opt2 = knapsack(n - 1, v, w, cost);
        cout << opt1 << " " << opt2 << endl;
        return max(opt1, opt2);
    }
    else
        return knapsack(n - 1, v, w, cost);
}
int main()
{
    int n;
    cin >> n;
    int w[n], v[n];
    for (int i = 0; i < n; i++)
        cin >> w[i] >> v[i];
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         for (int k = j; k <= i; k++)
    //             cout << a[k] << "  ";
    //         cout << endl;
    //     }
    //     // cout << endl;
    // }

    // subarray(0, n, a);

    cout << knapsack(n, v, w, 10) << endl;
    return 0;
}