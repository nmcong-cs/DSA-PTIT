#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n;
string s;
vector<string> ans;
map<string, int> m;
void Try(int i, string x)
{
    if (x != "" && m[x] == 0)
    {
        ans.push_back(x);
        m[x]++;
    }
    if (i == n)
        return;
    Try(i + 1, x + s[i]);
    Try(i + 1, x);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ans.clear();
        m.clear();
        cin >> n >> s;
        Try(0, "");
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
    }
}