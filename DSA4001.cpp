#include <bits/stdc++.h>
#define mol 1000000007 
using namespace std; 
long long result (long long n, long long k){ 
    long long res = 1; 
    while (k > 0){ 
        if (k % 2 == 1){ 
            res = (res*n) % mol; 
        } 
        n = (n*n) % mol; 
        k /= 2; 
    } 
    return res; 
} 
void test() { 
    long long n, k; 
    cin >> n >> k;
    cout << result(n,k); 
} 
int main (){ 
    int t; 
    cin >> t; 
    while (t--){ 
        test(); 
        cout << endl; 
    } 
}