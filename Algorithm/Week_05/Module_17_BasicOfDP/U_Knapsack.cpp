// #include <bits/stdc++.h>
// using namespace std;
// int value[20], weight[20];
// int knaspack(int n, int w)
// {
//     if (n == 0 || w == 0)
//         return 0;
//     if (weight[n - 1] <= w)
//     {
//         int opt1 = knaspack(n - 1, w - weight[n - 1]);
//         int opt2 = knaspack(n - 1, w);
//         return max(value[n - 1] + opt1, opt2);
//     }
//     else
//     {
//         return knaspack(n - 1, w);
//     }
// }
// int main()
// {
//     int n, w;
//     cin >> n >> w;
//     for (int i = 0; i < n; i++)
//     {
//         int a, b;
//         cin >> a >> b;
//         value[i] = b;
//         weight[i] = a;
//     }
//     cout << knaspack(n, w) << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int value[20], weight[20];
int knaspack(int n, int w)
{
    if (n == 0 || w == 0)
        return 0;
    if (weight[n - 1] <= w)
    {
        int opt1 = knaspack(n - 1, w - weight[n - 1]) + value[n - 1];
        int opt2 = knaspack(n - 1, w);
        return max(opt1, opt2);
    }
    else
    {
        return knaspack(n - 1, w);
    }
}
int main()
{
    int n, w;
    cin >> n >> w;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        weight[i] = a;
        value[i] = b;
    }
    cout << knaspack(n, w);
    return 0;
}