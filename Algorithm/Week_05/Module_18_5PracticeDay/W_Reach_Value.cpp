#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool knapsack(ll n, ll m)
{
    if (m > n)
        return false;
    else if (m == n)
        return true;
    else
        return knapsack(n, m * 10) || knapsack(n, m * 20);
}
ll knapsack1(ll n)
{
    if (n <= 1)
        return n;
    if (n / 20 <= 1)
        return knapsack1(n / 10);
    else
        return knapsack1(n / 20);
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        // cout << knapsack(n, 1) << endl;
        if (knapsack(n, 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        // if (knapsack1(n) == 1)
        //     cout << "YES" << endl;
        // else
        //     cout << "NO" << endl;
    }
    return 0;
}