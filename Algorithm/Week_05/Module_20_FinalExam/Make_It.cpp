#include <bits/stdc++.h>
using namespace std;
int knaspack(int n)
{
    if (n <= 1)
        return n;
    return knaspack(n - 3);
    return knaspack(n / 2);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // cout << knaspack(n) << endl;
        if (knaspack(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}