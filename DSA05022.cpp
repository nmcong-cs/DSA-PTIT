#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y, z;
        cin >> n >> x >> y >> z;
        int a[n + 2];
        a[1] = x;
        a[2] = a[1] + min(x, z);
        for (int i = 3; i <= n + 1; i++)
        {
            a[i] = a[i - 1] + x;
            if (i % 2 == 0)
                a[i] = min(a[i], a[i / 2] + z);
            a[i - 1] = min(a[i - 1], a[i] + y);
        }
        cout << a[n] << endl;
    }
}