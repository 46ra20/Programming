// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     vector<int>::iterator it;
//     for (int i = 0; i < n; i++)
//     {
//         it = find(a.begin() + (i + 1), a.end(), a[i]);
//         if (*it)
//             break;
//     }
//     if (*it == 0)
//         cout << "NO" << endl;
//     else
//         cout << "YES" << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     bool flag = 0;
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (i != j && a[i] == a[j])
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//     }
//     if (flag)
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, flag = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] == a[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}