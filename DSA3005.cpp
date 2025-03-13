#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        long long lon=0,be=0;
        k=min(k,n-k);
        for(int i=0;i<k;i++){
            be+=a[i];
        }
        for(int i=k;i<n;i++){
            lon+=a[i];
        }
        cout << lon-be << endl;
    }
}