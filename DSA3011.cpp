#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int mod = 1000000007;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        priority_queue<int, vector<int>, greater<int>> q; 

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            q.push(x);
        }

        long long res = 0;
        while (q.size() > 1) {
            int s1 = q.top(); q.pop(); 
            int s2 = q.top(); q.pop();  
            res = (res+(s1 + s2))%mod;
            q.push((s1 + s2)%mod); 
        }

        cout << res << endl;
    }
    return 0;
}
