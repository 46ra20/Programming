#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int c = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i] < arr[j])
                {
                    c++;
                    swap(arr[i], arr[j]);
                }
            }
        }
        // for (int i = 0; i < n; i++)
        //     cout << arr[i];
        // cout << endl;
        cout << c << endl;
    }
    return 0;
}