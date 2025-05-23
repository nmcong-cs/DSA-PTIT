#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, s = 1e9, S = 0;
int a[100], b[100] = {};
vector<string> c(20);
int kt(string a, string b)
{
    int i = 0, j = 0, e = a.size(), f = b.size(), ss = 0;
    while (i < e && j < f)
    {
        if (a[i] == b[j])
        {
            ss++;
            i++;
            j++;
        }
        while (a[i] < b[j])
        {
            i++;
            if (i == e)
                break;
        }
        while (a[i] > b[j])
        {
            j++;
            if (j == f)
                break;
        }
    }
    return ss;
}
void Try(int x)
{
    for (int i = 1; i <= n; i++)
    {
        if (b[i] == 0)
        {
            a[x] = i;
            b[i] = 1;
            int k = kt(c[a[x - 1]], c[i]);
            S += k;
            if (x == n && S < s)
                s = S;
            else if (x < n && S < s)
                Try(x + 1);
            b[i] = 0;
            S -= k;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> c[i];
    c[0] = "";
    Try(1);
    cout << s;
}