#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long int> a(n), b(n + 1);
    b[0] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i + 1] = b[i] + a[i];
    }
    for (int i = b.size() - 1; i > 0; i--)
    {
        cout << b[i] << " ";
    }
    return 0;
}