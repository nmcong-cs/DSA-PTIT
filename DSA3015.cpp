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
    int total = s * m; // tổng lượng lương thực cần có 
    int x = (s - s/7) * n; // lượng lương thực tối đa có thể mua được 
    if(x < total){ // nếu không thể mua đủ lương thực thì chết đói 
        cout << -1; 
     return; 
    } 
    int ans = total / n; // số ngày cần để mua đủ lượng lương thực cần thiết 
    if(total % n != 0){ // nếu lẻ thì cần thêm 1 ngày nữa 
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