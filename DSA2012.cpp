#include<bits/stdc++.h>
using namespace std;
int C(int n, int k) {  
    if (k == 0 || k == n) return 1; 
    return C(n - 1, k - 1) + C(n - 1, k); 
} 
void giai() { 
    int N, M; 
    cin >> N >> M; 
    int a[N * M]; 
    for (auto &x : a) cin >> x; 
    cout << C(N + M - 2, N - 1) << endl; 
    return; 
}
int main(){
    int t;
    cin >> t;
    while(t--){
        giai();
    }
}