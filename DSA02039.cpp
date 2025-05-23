#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
struct data
{
    int d[10];
};
bool cmp(struct data a, struct data b)
{
    for (int i = 0; i < 10; i++)
    {
        if (a.d[i] != b.d[i])
            return a.d[i] > b.d[i];
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x = 0;
        cin >> n;
        struct data c[50];
        for (int i = 0; i < 50; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                c[i].d[j] = 0;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            int a[i];
            for (int j = 0; j < i; j++)
                a[j] = n - i + 1;
            while (1)
            {
                int s = 0, ok = 0;
                for (int j = 0; j < i; j++)
                    s += a[j];
                if (s == n)
                {
                    for (int j = 0; j < i; j++)
                        c[x].d[j] = a[j];
                    x++;
                }
                for (int j = i - 1; j >= 0; j--)
                {
                    if (a[j] != 1)
                    {
                        ok = 1;
                        a[j]--;
                        for (int jj = j + 1; jj < i; jj++)
                            a[jj] = a[j];
                        break;
                    }
                }
                if (ok == 0)
                    break;
            }
        }
        sort(c, c + x, cmp);
        cout << x << endl;
        for (int i = 0; i < x; i++)
        {
            cout << "(" << c[i].d[0];
            for (int j = 1; j < 10; j++)
            {
                if (c[i].d[j] == 0)
                    break;
                cout << " " << c[i].d[j];
            }
            cout << ") ";
        }
        cout << endl;
    }
}