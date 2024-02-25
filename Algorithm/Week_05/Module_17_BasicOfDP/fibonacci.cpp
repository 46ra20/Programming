#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll dip[100];
ll fibo(int n)
{
    if (n == 1 || n == 0)
        return n;
    if (dip[n] != -1)
    {
        return dip[n];
    }
    dip[n] = fibo(n - 1) + fibo(n - 2);
    return fibo(n - 1) + fibo(n - 2);
    // return f;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
        dip[i] = -1;

    for (int i = 0; i <= n; i++)
    {
        cout << fibo(i) << " ";
    };
    return 0;
}