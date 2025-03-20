#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        int ok=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==k){
                cout << 1 << endl;
                ok=1;
            }
        }
        if(ok==0) cout << -1 << endl;
    }
}