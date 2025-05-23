#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef unsigned long long ll;
const ll INF = 1e19 + 1;
int main()
{
    ll f[15][1111];
    vector<ll> p[15];
    ll a[] = {0, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    for (int i = 1; i <= 11; i = i + 1)
    {
        p[i].push_back(1);
        p[i].push_back(a[i]);
        while (p[i][p[i].size() - 1] > p[i][p[i].size() - 2])
        {
            int k = p[i].size() - 1;
            p[i].push_back(p[i][k] * a[i]);
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i = i + 1)
        {
            if (i - 1 >= p[1].size() - 1)
                f[1][i] = INF;
            else
                f[1][i] = p[1][i - 1];
        }
        for (int i = 2; i <= 11; i = i + 1)
            for (int j = 1; j <= n; j = j + 1)
            {
                f[i][j] = INF;
                for (int k = 1; k <= j; k = k + 1)
                    if (j % k == 0)
                        if ((k - 1 < p[i].size() - 1) && (f[i - 1][j / k] < INF))
                            if ((f[i - 1][j / k] * p[i][k - 1]) % f[i - 1][j / k] == 0)
                                if (f[i][j] > f[i - 1][j / k] * p[i][k - 1])
                                    f[i][j] = f[i - 1][j / k] * p[i][k - 1];
            }
        cout << f[11][n] << endl;
    }
}