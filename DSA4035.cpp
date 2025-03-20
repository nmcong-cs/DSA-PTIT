#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll a;
ll b;
ll mod = 1000000007;
ll lt(ll a,ll b){
    if(b==1) return a;
    ll res=lt(a,b/2);
    if(b%2==0) return (res*res)%mod;
    else return (((res*res)%mod)*a)%mod;
}
int main(){
    while(1){
        cin >> a >> b;
        if(a==0 && b==0) break;
        if(b==0) cout << 1 << endl;
        else cout << lt(a,b) << endl;
    }
}