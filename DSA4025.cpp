#include<bits/stdc++.h>
using namespace std;
int mod=1000000007;
int a[1000000007];
int n;
int solve(int n){
    a[0]=0;
    a[1]=1;
    for(int i=0;i<=mod;i++){
        a[i]=(a[i-1]+a[i-2])%mod;
        if(i==n) return a[i];
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        cout << solve(n) << endl;
    }
}