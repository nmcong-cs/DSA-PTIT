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
        int n;
        cin >> n;
        int a[n], l[n], r[n], ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            l[i] = a[i];
            for (int j = 0; j < i; j++)
                if (a[i] > a[j])
                    l[i] = max(l[i], l[j] + a[i]);
        }
        for (int i = n - 1; i >= 0; i--)
        {
            r[i] = a[i];
            for (int j = i + 1; j < n; j++)
                if (a[i] > a[j])
                    r[i] = max(r[i], r[j] + a[i]);
            ans = max(ans, l[i] + r[i] - a[i]);
        }
        cout << ans << endl;
    }
}