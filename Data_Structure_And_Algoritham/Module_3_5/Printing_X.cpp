#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = 0, x = n - 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= k; j++)
            cout << " ";
        if (i < (n / 2))
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    cout << "\\";
            }
            for (int j = x; j > 0; j--)
                cout << " ";
            cout << "/";
        }
        else if (i > n / 2)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    cout << "/";
            }
            for (int j = x; j > 0; j--)
                cout << " ";
            cout << "\\";
        }
        else
            cout << "X";
        cout << endl;
        if (i < n / 2)
        {
            k++;
            x -= 2;
        }
        else
        {
            k--;
            x += 2;
        }
    }
    return 0;
}