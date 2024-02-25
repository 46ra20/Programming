// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// ll fibo(int n)
// {
//     if (n == 0 || n == 1)
//         return n;
//     return fibo(n - 1) + fibo(n - 2);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << fibo(n - 1) << endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin >> n;
    ll arr[32];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    cout << arr[n - 1] << endl;
    return 0;
}