#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int cmp(int a,int b){
    return a>b;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[n],b[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];
        sort(a,a+n);
        sort(b,b+n,cmp);
        ll ans=0;
        for(int i = 0; i < n; i++)
            ans+=a[i]*b[i];
        cout << ans << endl;
    }
    
}