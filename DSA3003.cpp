#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        int tong=0;
        for(int i=0;i<n;i++){
            tong+=(a[i]*i)%1000000007;
            tong%=1000000007;
        }
        cout << tong << endl;
    }
}