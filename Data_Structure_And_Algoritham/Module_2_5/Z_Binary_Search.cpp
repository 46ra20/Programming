// #include <bits/stdc++.h>
// using namespace std;
// int fun(int x, vector<int> a)
// {
//     int l = 0, r = a.size() - 1, m;
//     while (l <= r)
//     {
//         m = (l + (r - l)) / 2;
//         if (a[m] == x)
//             return 1;
//         if (a[m] < x)
//             l = m + 1;
//         else
//             r = m - 1;
//     }
//     return 0;
// }
// int main()
// {
//     int n, q, x;
//     cin >> n >> q;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     while (q--)
//     {
//         cin >> x;
//         int flag = 0;
//         sort(a.begin(), a.end());
//         // for (int i = 0; i < a.size(); i++)
//         flag = fun(x, a);
//         if (flag)
//             cout << "found" << endl;
//         else
//             cout << "not found" << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    while (q--)
    {
        int flag = 0, x;
        cin >> x;
        if (binary_search(a.begin(), a.end(), x))
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int c_binary_search(vector<int> a, int l, int r, int x)
// {
//     while (l <= r)
//     {
//         int m = l + (r - l) / 2;
//         if (a[m] == x)
//             return 1;
//         if (a[m] < x)
//             l = m + 1;
//         else
//             r = m - 1;
//     }
//     return 0;
// }
// int main()
// {
//     int n, q;
//     cin >> n >> q;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     sort(a.begin(), a.end());
//     while (q--)
//     {
//         int x, l = 0, r = n - 1, flag = 0;
//         cin >> x;
//         flag = c_binary_search(a, l, r, x);
//         if (flag)
//             cout << "found" << endl;
//         else
//             cout << "not found" << endl;
//     }
//     return 0;
// }