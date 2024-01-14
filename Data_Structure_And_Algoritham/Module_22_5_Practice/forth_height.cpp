#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (sizeof(arr) / sizeof(arr[0]) < 4)
        cout << "Oh no" << endl;
    sort(arr, arr + n, greater<int>());
    cout << arr[4 - 1];
    return 0;
}