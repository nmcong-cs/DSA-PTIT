#include <bits/stdc++.h> 
using namespace std; 
int M = 1e9+7; 
long long powMod(long long n, long long k) { 
    if(k == 0) return 1; 
    long long x = powMod(n,k/2); 
    if(k % 2 == 0) return x*x%M; 
    return n*(x*x%M)%M; 
} 
long long dao(long long n) { 
    long long tmp = 0; 
    while(n != 0) { 
        tmp = tmp*10 + n%10; 
        n/=10; 
    } 
    return tmp; 
} 
int main() { 
    int t; 
    cin >> t; 
    while(t--) { 
        long long n; 
        cin >> n; 
        cout << powMod(n, dao(n)) << endl; 
    } 
}