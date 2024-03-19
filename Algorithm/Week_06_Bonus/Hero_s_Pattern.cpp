#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - 1; j++)
            cout << " ";
        for (int j = i; j < n; j++)
            cout << "*";
        for (int j = 0; j < i * 4; j++)
            cout << " ";
        for (int j = i; j < n; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = (n - 1) * 2; j > i * 2; j--)
            cout << " ";
        for (int j = (n - 1) * 2; j > i * 2; j--)
            cout << " ";
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i < n * 2; i++)
//     {
//         for (int j = 1; j < (n * 2) + ((n - 1) * 2); j++)
//         {
//             if (j > (n - i) && j < (n * 2) - i)
//                 cout << "*";
//             else
//                 cout << "r";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     cin >> n;
// //     for (int i = 0; i < n * 2 - 1; i++)
// //     {
// //         if (i < n)
// //         {
// //             for (int j = i + 1; j < n; j++)
// //                 cout << " ";
// //             for (int j = i; j < n; j++)
// //                 cout << "*";
// //             for (int j = 0; j < i * 4; j++)
// //                 cout << " ";
// //             for (int j = i; j < n; j++)
// //                 cout << "*";
// //         }
// //         else
// //         {
// //             for (int j = 0; j < i - n + 1; j++)
// //                 cout << " ";
// //             for (int j = 0; j <= i - n + 1; j++)
// //                 cout << "*";
// //             if (n % 2 != 0)
// //             {
// //                 for (int j = n * (n / 2) - 1; j > (i - n) * 4; j--)
// //                     cout << " ";
// //             }
// //             else
// //             {
// //                 for (int j = n * (n / 2); j > (i - n) * 4; j--)
// //                     cout << " ";
// //             }
// //             for (int j = 0; j <= i - n + 1; j++)
// //                 cout << "*";
// //         }
// //         cout << endl;
// //     }
// //     return 0;
// // }

// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     cin >> n;
// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int j = i; j < n; j++)
// //             cout << " ";
// //         for (int j = i; j < n; j++)
// //             cout << "*";
// //         for (int j = 0; j < i * 4; j++)
// //             cout << " ";
// //         for (int j = i; j < n; j++)
// //             cout << "*";
// //         cout << endl;
// //     }
// //     for (int i = 1; i < n; i++)
// //     {
// //         for (int j = 1; j <= i; j++)
// //             cout << " ";
// //         for (int j = 0; j <= i; j++)
// //             cout << "*";
// //         for (int j = 0; j <= n * 2; j++)
// //         {
// //             cout << " ";
// //         }
// //         for (int j = 0; j <= i; j++)
// //         {
// //             cout << "*";
// //         }
// //         cout << endl;
// //     }
// //     return 0;
// // }