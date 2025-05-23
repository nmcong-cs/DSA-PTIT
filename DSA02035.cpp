#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int to_int(string s)
{
    int a = 0;
    for (int i = 0; i < s.size(); i++)
    {
        a = a * 10 + s[i] - '0';
    }
    return a;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int m, n;
    cin >> m >> n;
    int a[n + 1], MIN = 1e9;
    vector<string> b(m);
    vector<string> c;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        b[i] = "0" + b[i];
    }
    for (int i = 1; i <= n; i++)
        a[i] = i;
    while (1)
    {
        c.clear();
        for (int i = 0; i < m; i++)
        {
            string x = b[i];
            for (int j = 1; j <= n; j++)
                x[j] = b[i][a[j]];
            c.push_back(x);
        }
        sort(c.begin(), c.end());
        MIN = min(MIN, to_int(c[c.size() - 1]) - to_int(c[0]));
        int ok = 0;
        for (int i = n - 1; i >= 1; i--)
        {
            if (a[i] < a[i + 1])
            {
                ok = 1;
                sort(a + i + 1, a + n + 1);
                for (int j = i + 1; j <= n; j++)
                {
                    if (a[j] > a[i])
                    {
                        swap(a[i], a[j]);
                        break;
                    }
                }
                break;
            }
        }
        if (ok == 0)
            break;
    }
    cout << MIN;
}