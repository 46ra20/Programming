#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, q;
    cin >> n >> q;
    long long int arr[n], sum[n + 1];
    sum[0] = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum[i + 1] = sum[i] + arr[i];
    }
    while (q--)
    {
        long long int l, r;
        cin >> l >> r;
        long long int ans = sum[r] - sum[l - 1];
        cout << ans << endl;
    }
    return 0;
}