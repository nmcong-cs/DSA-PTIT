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
        int n, m;
        cin >> n >> m;
        int a[n + 1][m + 1], b[n + 1][m + 1] = {};
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> a[i][j];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (i == 1)
                    b[i][j] = b[i][j - 1];
                else if (j == 1)
                    b[i][j] = b[i - 1][j];
                else
                    b[i][j] = min(b[i - 1][j - 1], min(b[i - 1][j], b[i][j - 1]));
                b[i][j] += a[i][j];
            }
        }
        cout << b[n][m] << endl;
    }
}