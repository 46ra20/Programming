#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    long long int ans = 0;
    cin >> n >> q;
    vector<int> a(n);
    vector<long long int> b(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i + 1] = b[i] + a[i];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        ans = b[r] - b[l - 1];
        cout << ans << endl;
        ans = 0;
    }
    return 0;
}