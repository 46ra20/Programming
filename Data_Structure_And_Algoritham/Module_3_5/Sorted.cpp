// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, flag = 1;
//         cin >> n;
//         int a[n + 1];
//         a[0] = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i + 1];
//             if (a[i - 1] > a[i])
//             {
//                 cout << a[i - 1] << " " << a[i] << endl;
//                 flag = 0;
//             }
//         }
//         if (flag == 0)
//             cout << "NO" << endl;
//         else
//             cout << "YES" << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 1;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i > 0 && a[i - 1] > a[i])
            {
                flag = 0;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}