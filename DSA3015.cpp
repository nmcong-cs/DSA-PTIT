#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); 
int n, s, m; 
void solve(){ 
    if(n < m){ 
        cout << -1; 
        return; 
    } 
    int total = s * m; 
    int x = (s - s/7) * n; 
    if(x < total){ 
        cout << -1; 
     return; 
    } 
    int ans = total / n; 
    if(total % n != 0){ 
     ++ans; 
    } 
        cout << ans; 
} 
int main(){ 
    faster(); 
    int t; cin >> t; 
    while(t--){ 
        cin >> n >> s >> m; 
        solve();
        cout << '\n'; 
    } 
    return 0; 
}