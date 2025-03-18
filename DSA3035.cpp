#include<bits/stdc++.h> 
using namespace std; 
void find (vector<int>&a, int n){ 
    int dp[100005]; 
    int res = 0; 
    for (int i = 0; i < n; i++){ 
        dp[a[i]] = dp[a[i] - 1] + 1; 
        res = max (res, dp[a[i]]); 
    } 
    cout << n - res; 
} 
int main(){ 
    int n; 
    cin >> n; 
    int x; 
    vector <int> a(n); 
    for (int i = 0; i < n; i++) { 
        cin >> a[i]; 
    } 
    find (a, n); 
}