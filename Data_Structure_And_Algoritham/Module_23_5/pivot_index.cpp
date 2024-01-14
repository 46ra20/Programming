#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 7, 3, 6, 5, 6};
    int x, leftSum = 0, rightSum = 0;
    int l = 0, r = v.size() - 1;
    while (true)
    {
        if (leftSum <= rightSum)
            leftSum += v[l], l++;
        else if (leftSum == rightSum)
        {
            cout << v[l] << " " << v[r] << endl;
            cout << "Yes" << endl;
            break;
        }
        else
            rightSum += v[r], r--;
    }
    return 0;
}