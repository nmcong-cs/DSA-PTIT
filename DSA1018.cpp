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
		int n, k;
		cin >> n >> k;
		int a[k + 1], ok = 0, pos = k - 1;
		for (int i = 1; i <= k; i++)
			cin >> a[i];
		while (a[pos] + 1 == a[pos + 1] && pos > 0)
		{
			pos--;
		}
		if (pos == 0)
			for (int i = n - k + 1; i <= n; i++)
				cout << i << " ";
		else
		{
			pos++;
			a[pos]--;
			for (int i = k; i > pos; i--)
				a[i] = n - k + i;
			for (int i = 1; i <= k; i++)
				cout << a[i] << " ";
		}
		cout << endl;
	}
}