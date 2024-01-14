// #include <bits/stdc++.h>
// using namespace std;
// int getMin(vector<int> v)
// {
//     int n = v.size(), mn = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if (mn > v[i])
//         {
//             mn = v[i];
//         }
//     }
//     return mn;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//         cin >> v[i];
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int i;
//         cin >> i;
//         if (i == 0)
//         {
//             int x;
//             cin >> x;
//             v.push_back(x);
//             int mn = getMin(v);
//             cout << mn << endl;
//         }
//         else if (i == 1)
//         {
//             if (v.empty())
//                 cout << "Empty" << endl;
//             else
//             {
//                 int mn = getMin(v);
//                 cout << mn << endl;
//             }
//         }
//         else if (i == 2)
//         {
//             if (!v.empty())
//             {
//                 int mi = INT_MAX, j;
//                 int m = v.size();
//                 for (int i = 0; i < m; i++)
//                 {
//                     if (mi > v[i])
//                     {
//                         mi = v[i];
//                         j = i;
//                     }
//                 }
//                 v.erase(v.begin() + j, v.begin() + j + 1);
//             }

//             if (v.empty())
//                 cout << "Empty" << endl;
//             else
//             {
//                 int mn = getMin(v);
//                 cout << mn << endl;
//             }
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//         cin >> v[i];
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int i;
//         cin >> i;
//         if (i == 0)
//         {
//             int x;
//             cin >> x;
//             v.push_back(x);
//             sort(v.begin(), v.end(), greater<int>());
//             cout << v.back() << endl;
//         }
//         else if (i == 1)
//         {
//             if (v.empty())
//                 cout << "Empty" << endl;
//             else
//             {
//                 sort(v.begin(), v.end(), greater<int>());
//                 cout << v.back() << endl;
//             }
//         }
//         else if (i == 2)
//         {
//             sort(v.begin(), v.end(), greater<int>());
//             if (!v.empty())
//             {
//                 v.pop_back();
//             }
//             if (v.empty())
//                 cout << "Empty" << endl;
//             else
//             {
//                 cout << v.back() << endl;
//             }
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     set<int> st;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         st.insert(x);
//     }

//     for (auto it = st.begin(); it != st.end(); it++)
//         cout << *it << " ";
//     return 0;
// }

/////with queue

#include <bits/stdc++.h>
using namespace std;
class Compare
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, Compare> pq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int i;
        cin >> i;
        if (i == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }
        else if (i == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;
        }
        else if (i == 2)
        {
            if (!pq.empty())
                pq.pop();
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;
        }
    }
    return 0;
}