#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        map<int,int> mp;
        for (int i=0;i<n;i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        if(mp[k] != 0) cout << mp[k] << endl;
        else cout << -1 << endl;
    }
}